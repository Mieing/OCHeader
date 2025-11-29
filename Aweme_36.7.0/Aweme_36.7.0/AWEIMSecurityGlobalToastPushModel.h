@class NSString, AWEIMSecurityGlobalToastPushModel_DialogModel;

@interface AWEIMSecurityGlobalToastPushModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *bizType;
@property (copy, nonatomic) AWEIMSecurityGlobalToastPushModel_DialogModel *globalDialog;

+ (id)globalDialogsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
