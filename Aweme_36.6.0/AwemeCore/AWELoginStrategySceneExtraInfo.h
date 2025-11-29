@class NSString, NSArray;

@interface AWELoginStrategySceneExtraInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *shape;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long flushFrequencyTime;
@property (nonatomic) long long guideIndifferentSkipCounts;
@property (nonatomic) long long guideIndifferentSkipDays;
@property (copy, nonatomic) NSString *userPopType;
@property (copy, nonatomic) NSString *mostLaunchStartTime;
@property (copy, nonatomic) NSString *mostLaunchEndTime;
@property (copy, nonatomic) NSArray *sceneList;
@property (nonatomic) BOOL isLogoutResetFrequency;
@property (nonatomic) long long frequencyUpdateCycle;
@property (nonatomic) BOOL avoidOtherGuide;
@property (copy, nonatomic) NSArray *avoidSceneList;
@property (copy, nonatomic) NSArray *mostLaunchTimeList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mostLaunchTimeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
