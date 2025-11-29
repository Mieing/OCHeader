@class NSMutableDictionary;

@interface IESLiveIncentiveTaskPanelActivityLimitHandler : NSObject

@property (retain, nonatomic) NSMutableDictionary *activityIdToTimesCacheDict;

- (BOOL)enableActivityLimit;
- (BOOL)isOverActivityLimitWithPanelInfo:(id)a0;
- (void)updateActivityTimesWithPanelInfo:(id)a0;
- (void).cxx_destruct;

@end
