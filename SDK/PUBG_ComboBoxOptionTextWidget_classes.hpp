#pragma once

// PlayerUnknown's Battlegrounds SDK

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

namespace Classes
{
	//---------------------------------------------------------------------------
	//Classes
	//---------------------------------------------------------------------------

	// WidgetBlueprintGeneratedClass ComboBoxOptionTextWidget.ComboBoxOptionTextWidget_C
	// 0x0018 (0x0258 - 0x0240)
	class UComboBoxOptionTextWidget_C : public UUserWidget
	{
	public:
		struct FText                                       DisplayName;                                              // 0x0240(0x0018) (CPF_Edit, CPF_BlueprintVisible)

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr) ptr = UObject::FindClass(0xbc1797fb);
			return ptr;
		}

	};


}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
