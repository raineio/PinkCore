#pragma once

#include "custom-types/shared/macros.hpp"

#include "HMUI/TableView_IDataSource.hpp"
#include "HMUI/TableView.hpp"
#include "HMUI/TableCell.hpp"

#include "UnityEngine/MonoBehaviour.hpp"
#include "UnityEngine/Sprite.hpp"

#include "GlobalNamespace/LevelListTableCell.hpp"

DECLARE_CLASS_CODEGEN_INTERFACES(PinkCore::UI, RequirementModalListTableData, UnityEngine::MonoBehaviour, classof(HMUI::TableView::IDataSource*), 
        DECLARE_INSTANCE_FIELD(GlobalNamespace::LevelListTableCell*, songListTableCellInstance);
        DECLARE_INSTANCE_FIELD(HMUI::TableView*, tableView);
        DECLARE_INSTANCE_FIELD(StringW, reuseIdentifier);
        DECLARE_INSTANCE_FIELD(float, cellSize);
        DECLARE_INSTANCE_FIELD(UnityEngine::Sprite*, wipSprite);
        DECLARE_INSTANCE_FIELD(UnityEngine::Sprite*, coloursSprite);
        DECLARE_INSTANCE_FIELD(UnityEngine::Sprite*, requirementFoundSprite);
        DECLARE_INSTANCE_FIELD(UnityEngine::Sprite*, requirementMissingSprite);
        DECLARE_INSTANCE_FIELD(UnityEngine::Sprite*, suggestionFoundSprite);
        DECLARE_INSTANCE_FIELD(UnityEngine::Sprite*, suggestionMissingSprite);
        DECLARE_INSTANCE_FIELD(UnityEngine::Sprite*, missingSpriteSprite);
        DECLARE_INSTANCE_FIELD(UnityEngine::Sprite*, infoSprite);
        DECLARE_INSTANCE_METHOD(void, Refresh);
        DECLARE_OVERRIDE_METHOD(HMUI::TableCell*, CellForIdx, il2cpp_utils::il2cpp_type_check::MetadataGetter<&HMUI::TableView::IDataSource::CellForIdx>::get(), HMUI::TableView* tableView, int idx);
        DECLARE_OVERRIDE_METHOD(float, CellSize, il2cpp_utils::il2cpp_type_check::MetadataGetter<&HMUI::TableView::IDataSource::CellSize>::get());
        DECLARE_OVERRIDE_METHOD(int, NumberOfCells, il2cpp_utils::il2cpp_type_check::MetadataGetter<&HMUI::TableView::IDataSource::NumberOfCells>::get());

        DECLARE_CTOR(ctor);

    private:
        GlobalNamespace::LevelListTableCell* GetTableCell();
        GlobalNamespace::LevelListTableCell* GetWipCell();
        GlobalNamespace::LevelListTableCell* GetCustomColoursCell();
        GlobalNamespace::LevelListTableCell* GetRequirementCell(int idx);
        GlobalNamespace::LevelListTableCell* GetSuggestionCell(int idx);
        GlobalNamespace::LevelListTableCell* GetContributorCell(int idx);
        GlobalNamespace::LevelListTableCell* GetRequirementOrSuggestionCell(std::string requirementName);

)
