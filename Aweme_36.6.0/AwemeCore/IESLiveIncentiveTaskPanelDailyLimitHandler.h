@class NSMutableDictionary, NSDateFormatter;

@interface IESLiveIncentiveTaskPanelDailyLimitHandler : NSObject

@property (retain, nonatomic) NSMutableDictionary *cacheDict;
@property (retain, nonatomic) NSDateFormatter *dataFormatter;

- (BOOL)enableDailyLimit;
- (id)cacheKeyWithPanelInfo:(id)a0;
- (BOOL)isOverDailyLimitWithPanelInfo:(id)a0;
- (void)updateDailyTimesWithPanelInfo:(id)a0;
- (void).cxx_destruct;
- (id)currentDateString;

@end
