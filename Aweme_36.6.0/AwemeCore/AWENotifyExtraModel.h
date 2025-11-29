@class NSString;

@interface AWENotifyExtraModel : ACCBaseApiModel

@property (copy, nonatomic) NSString *noteText;
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) unsigned long long alertType;
@property (copy, nonatomic) NSString *linkURL;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
