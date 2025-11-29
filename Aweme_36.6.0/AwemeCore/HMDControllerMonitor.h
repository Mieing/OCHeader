@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, HMDControllerMonitorDelegate;

@interface HMDControllerMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pageQueue;
@property (retain, nonatomic) NSMutableDictionary *pageTimeDictionary;
@property (weak, nonatomic) id<HMDControllerMonitorDelegate> delegate;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)getControllerMonitorBlockList;
- (void)recordVC:(id)a0 actionType:(id)a1 interval:(double)a2 isFirstOpen:(long long)a3;
- (void).cxx_destruct;
- (id)init;

@end
