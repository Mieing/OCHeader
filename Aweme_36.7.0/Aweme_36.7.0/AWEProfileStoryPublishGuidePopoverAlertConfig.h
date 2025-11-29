@class NSString;

@interface AWEProfileStoryPublishGuidePopoverAlertConfig : AWEBaseBizConfigModel

@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long showCount;
@property (nonatomic) long long exitPeriod;
@property (nonatomic) double dismissTime;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
