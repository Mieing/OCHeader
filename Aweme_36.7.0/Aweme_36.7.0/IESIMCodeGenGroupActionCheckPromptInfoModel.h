@class IESIMCodeGenGroupActionCheckTextInfoModel, IESIMCodeGenGroupActionCheckToastInfoModel, IESIMCodeGenGroupActionCheckNormalPopupModel, IESIMCodeGenGroupActionCheckFilterPopupModel, IESIMCodeGenGroupActionCheckCreateRulePopUpModel, IESIMCodeGenGroupActionCheckMultiButtonPopUpModel, IESIMCodeGenGroupActionCheckActiveFilteredPopupModel;

@interface IESIMCodeGenGroupActionCheckPromptInfoModel : AWEBaseDataModel

@property (nonatomic) long long promptType;
@property (nonatomic) long long causeType;
@property (retain, nonatomic) IESIMCodeGenGroupActionCheckToastInfoModel *toastInfoModel;
@property (retain, nonatomic) IESIMCodeGenGroupActionCheckNormalPopupModel *normalPopupModel;
@property (retain, nonatomic) IESIMCodeGenGroupActionCheckFilterPopupModel *filterPopupModel;
@property (retain, nonatomic) IESIMCodeGenGroupActionCheckTextInfoModel *textInfoModel;
@property (retain, nonatomic) IESIMCodeGenGroupActionCheckCreateRulePopUpModel *createRulePopupModel;
@property (retain, nonatomic) IESIMCodeGenGroupActionCheckMultiButtonPopUpModel *multiButtonPopupModel;
@property (retain, nonatomic) IESIMCodeGenGroupActionCheckActiveFilteredPopupModel *activeFilteredPopupModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
