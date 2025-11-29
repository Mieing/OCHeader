@class NSArray;

@interface AWEIMConsecutiveChatAnimationModel : AWEBaseApiModel

@property (nonatomic) long long displayInterval;
@property (copy, nonatomic) NSArray *displayDays;
@property (nonatomic) BOOL displayWhenActive;
@property (nonatomic) BOOL displayLimitSameDay;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
