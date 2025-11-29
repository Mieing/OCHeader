@class NSString, NSArray;

@interface AWENearbyBubbleInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *activityID;
@property (copy, nonatomic) NSString *bubbleText;
@property (nonatomic) long long bubbleRangeType;
@property (retain, nonatomic) NSArray *citysArray;
@property (nonatomic) long long randomRange;
@property (nonatomic) long long delayDuration;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) long long frequency;

+ (BOOL)canShowNearByBubble;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
