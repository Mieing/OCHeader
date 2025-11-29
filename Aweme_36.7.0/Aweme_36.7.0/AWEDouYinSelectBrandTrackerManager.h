@class NSString, AWEDouYinSelectBrandTrackerInfo;

@interface AWEDouYinSelectBrandTrackerManager : NSObject <AWEDouyinSelectBrandTrackerProtocol>

@property BOOL isBrandAppear;
@property BOOL isPageAppear;
@property BOOL isRealPageAppear;
@property BOOL hasBrandEvent;
@property BOOL isForeground;
@property (retain, nonatomic) AWEDouYinSelectBrandTrackerInfo *trackerInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)onAppDidEnterBackground:(id)a0;
- (void)onAppWillEnterForeground:(id)a0;
- (void)resetPageStatus;
- (void)douYinSelectBrandDismiss;
- (void)douYinSelectBrandShow:(long long)a0 referString:(id)a1 extraParams:(id)a2;
- (void)setPageAppear:(BOOL)a0;
- (void)douYinSelectBrandReShow;
- (void)douYinSelectBrandHide;
- (void)setRealPageAppear:(BOOL)a0;
- (void)setUpNotifications;
- (BOOL)canShowBrand;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
