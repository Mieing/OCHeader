@class NSString;

@interface AWEIMWidgetInfoConsecutiveChatInfoModel : AWEBaseApiModel

@property (nonatomic) unsigned long long consecutiveState;
@property (nonatomic) long long consecutiveCount;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *text;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
