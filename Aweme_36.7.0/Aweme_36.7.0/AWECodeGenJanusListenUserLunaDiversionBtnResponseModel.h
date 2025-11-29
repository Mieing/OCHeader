@class AWECodeGenListenDiversionPopupModel, AWECodeGenExtraModel, AWECodeGenListenDiversionBtnModel;

@interface AWECodeGenJanusListenUserLunaDiversionBtnResponseModel : AWEBaseResponseModel

@property (retain, nonatomic) AWECodeGenListenDiversionBtnModel *btnModel;
@property (retain, nonatomic) AWECodeGenListenDiversionPopupModel *popupModel;
@property (retain, nonatomic) AWECodeGenExtraModel *extraModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
