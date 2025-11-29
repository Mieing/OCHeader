@class NSString, AWECodeGenFunctionBanPopupModel;

@interface AWESecondVerifyApiModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *secondVerifyType;
@property (retain, nonatomic) AWECodeGenFunctionBanPopupModel *popupConfig;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
