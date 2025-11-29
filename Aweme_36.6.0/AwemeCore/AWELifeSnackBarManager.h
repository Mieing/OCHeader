@class NSDictionary, NSString;

@interface AWELifeSnackBarManager : NSObject <AWELifeSnackBarManagerProtocol>

@property (retain, nonatomic) NSDictionary *lifeSnackbarHandles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)snackBarHandleWithPageType:(long long)a0;
- (id)grouponSnackBarHandle;
- (void)handleVideoPlayFinish:(id)a0;
- (void)handleLifeAnchorClick:(id)a0;
- (id)nearbySnackBarHandle;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addObservers;

@end
