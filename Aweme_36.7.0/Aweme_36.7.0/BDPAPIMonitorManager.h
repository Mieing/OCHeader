@class BDPThreadSafeArray, BDPThreadSafeDictionary;

@interface BDPAPIMonitorManager : NSObject

@property (retain, nonatomic) BDPThreadSafeDictionary *syncAPICallSheet;
@property (retain, nonatomic) BDPThreadSafeDictionary *asyncAPICallSheet;
@property (retain, nonatomic) BDPThreadSafeArray *usedUniqueIDSheet;

+ (void)recordSyncAPICall:(id)a0 APIName:(id)a1 beginTimeStamp:(double)a2 endTimeStamp:(double)a3;
+ (void)recordAsyncAPICall:(id)a0 APIName:(id)a1 beginTimeStamp:(double)a2 endTimeStamp:(double)a3;
+ (id)getSyncAPICallStat:(id)a0 untilTime:(double)a1;
+ (id)getAsyncAPICallStat:(id)a0 untilTime:(double)a1;
+ (void)resetSyncAPICallStat:(id)a0;
+ (void)resetAsyncAPICallStat:(id)a0;
+ (id)sharedInstance;

- (void)recordSyncAPICall:(id)a0 APIName:(id)a1 beginTimeStamp:(double)a2 endTimeStamp:(double)a3;
- (void)recordAsyncAPICall:(id)a0 APIName:(id)a1 beginTimeStamp:(double)a2 endTimeStamp:(double)a3;
- (void)reciveMemoryWarningNotification:(id)a0;
- (void)recordAPICall:(id)a0 APIName:(id)a1 beginTimeStamp:(double)a2 endTimeStamp:(double)a3 isSync:(BOOL)a4;
- (id)getAPICallStat:(id)a0 untilTime:(double)a1 sync:(BOOL)a2;
- (id)getSyncAPICallStat:(id)a0 untilTime:(double)a1;
- (id)getAsyncAPICallStat:(id)a0 untilTime:(double)a1;
- (void)resetSyncAPICallStat:(id)a0;
- (void)resetAsyncAPICallStat:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver;
- (void)releaseAll;

@end
