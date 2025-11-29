@class NSString;

@interface AFDLocalDataCheckParamsModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *awemeId;
@property (copy, nonatomic) NSString *logId;
@property (copy, nonatomic) NSString *toUid;
@property (nonatomic) long long is24Story;
@property (nonatomic) long long storyType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
