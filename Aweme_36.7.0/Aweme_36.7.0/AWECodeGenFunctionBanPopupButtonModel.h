@class NSString;

@interface AWECodeGenFunctionBanPopupButtonModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long action;
@property (copy, nonatomic) NSString *url;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
