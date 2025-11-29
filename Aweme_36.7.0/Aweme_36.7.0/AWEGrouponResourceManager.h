@class AWEGrouponRequestContext;

@interface AWEGrouponResourceManager : NSObject

@property (retain, nonatomic) AWEGrouponRequestContext *requestContext;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)trackDialogRequestMonitor:(id)a0 error:(id)a1 pageType:(long long)a2;
- (void)handleGrouponRequestContext:(id)a0;
- (void)trackNearbyCommonRequestMonitorEvent:(BOOL)a0 errMsg:(id)a1 reqTime:(double)a2 model:(id)a3 extraParam:(id)a4;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
