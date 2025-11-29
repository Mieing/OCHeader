@class NSString;

@interface AWEShowMonetizeStatusCheck : NSObject <AWEShowMonetizeStatusCheckService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isCDNUrlExpiredWithAweme:(id)a0 offsetDuration:(double)a1;
- (void)checkCDNUrlExpiredWithAwemes:(id)a0 currentAweme:(id)a1 checkType:(unsigned long long)a2;
- (void)refreshWithItemIDs:(id)a0 reason:(unsigned long long)a1;
- (void)checkPermissionStatusWithAwemes:(id)a0 currentAweme:(id)a1;
- (void)refreshWithItems:(id)a0 reason:(unsigned long long)a1;
- (id)init;
- (void)dealloc;
- (void)applicationDidBecomeActiveNotification:(id)a0;

@end
