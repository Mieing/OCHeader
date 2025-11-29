@class NSString, NSArray;

@interface IESLiveDetectionConfig : NSObject

@property (copy, nonatomic) NSString *business;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL enableRealUserCount;
@property (nonatomic) BOOL enableCustomEvent;
@property (nonatomic) BOOL enableEventOnlyDuringDetecting;
@property (retain, nonatomic) NSArray *customEventIgnoreList;
@property (nonatomic) BOOL enableAnchorDetect;
@property (nonatomic) long long detectInterval;
@property (nonatomic) long long reportLevel;
@property (nonatomic) long long notificationLevel;
@property (nonatomic) long long postAbnormalLevel;
@property (nonatomic) long long requiredAudienceCount;
@property (readonly, nonatomic) BOOL enablePostEvent;

- (void).cxx_destruct;
- (id)init;

@end
