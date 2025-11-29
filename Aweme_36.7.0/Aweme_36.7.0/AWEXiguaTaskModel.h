@class NSString;

@interface AWEXiguaTaskModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *jumpUrl;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *activityIconUrl;
@property (nonatomic) long long switchType;
@property (nonatomic) BOOL isXiguaTask;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
