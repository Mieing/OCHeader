@class NSString;

@interface AWEActivityTaskDoneModel : AWEBaseApiModel

@property (nonatomic) long long taskStatus;
@property (copy, nonatomic) NSString *toast;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
