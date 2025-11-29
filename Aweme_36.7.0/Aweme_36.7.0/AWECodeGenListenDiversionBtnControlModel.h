@class NSString, AWECodeGenActiveDateModel;

@interface AWECodeGenListenDiversionBtnControlModel : AWEBaseDataModel

@property (nonatomic) BOOL show;
@property (nonatomic) BOOL isActiveLunaListen;
@property (retain, nonatomic) AWECodeGenActiveDateModel *activeDateModel;
@property (copy, nonatomic) NSString *lunaAttr;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
