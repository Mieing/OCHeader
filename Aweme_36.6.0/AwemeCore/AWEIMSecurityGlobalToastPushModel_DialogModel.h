@class NSString;

@interface AWEIMSecurityGlobalToastPushModel_DialogModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *toastCode;
@property (copy, nonatomic) NSString *bizID;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *content;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
