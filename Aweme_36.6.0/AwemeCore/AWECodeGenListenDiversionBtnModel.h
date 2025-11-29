@class AWECodeGenListenDiversionBtnControlModel, AWECodeGenListenDiversionBtnDescModel;

@interface AWECodeGenListenDiversionBtnModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenListenDiversionBtnControlModel *controlModel;
@property (retain, nonatomic) AWECodeGenListenDiversionBtnDescModel *btnDescModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
