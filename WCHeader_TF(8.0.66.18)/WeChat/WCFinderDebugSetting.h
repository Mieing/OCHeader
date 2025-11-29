@class NSString;

@interface WCFinderDebugSetting : NSObject <PBCoding>

@property (nonatomic) BOOL showSpeedFloatWindow;
@property (nonatomic) BOOL testStreamSwitch;
@property (nonatomic) BOOL showFansCount;
@property (nonatomic) unsigned long long useRecommendSystemType;
@property (nonatomic) BOOL isHeaderBlurStyle;
@property (nonatomic) unsigned long long configFeedStyle;
@property (nonatomic) unsigned long long configNearbyStyle;
@property (nonatomic) unsigned long long configMachineStyle;
@property (nonatomic) BOOL isBulletAnimationAtTop;
@property (nonatomic) BOOL shouldHideLiveEntrance;
@property (nonatomic) unsigned long long TLRightItemType;
@property (nonatomic) unsigned long long unreadFeedNum;
@property (nonatomic) unsigned long long unreadLiveNum;
@property (nonatomic) unsigned long long unreadDynamicNum;
@property (nonatomic) unsigned long long totalFeedNum;
@property (nonatomic) unsigned long long totalLiveNum;
@property (nonatomic) unsigned long long totalDynamicNum;
@property (nonatomic) BOOL enableCGIMonitor;
@property (nonatomic) BOOL openFPSTest;
@property (nonatomic) BOOL openFPSAutoScroll;
@property (nonatomic) BOOL openRotationDector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_showSpeedFloatWindow;
+ (void)PBArrayAdd_testStreamSwitch;
+ (void)PBArrayAdd_showFansCount;
+ (void)PBArrayAdd_useRecommendSystemType;
+ (void)PBArrayAdd_isHeaderBlurStyle;
+ (void)PBArrayAdd_configFeedStyle;
+ (void)PBArrayAdd_configNearbyStyle;
+ (void)PBArrayAdd_configMachineStyle;
+ (void)PBArrayAdd_isBulletAnimationAtTop;
+ (void)PBArrayAdd_shouldHideLiveEntrance;
+ (void)PBArrayAdd_TLRightItemType;
+ (void)PBArrayAdd_unreadFeedNum;
+ (void)PBArrayAdd_unreadLiveNum;
+ (void)PBArrayAdd_unreadDynamicNum;
+ (void)PBArrayAdd_totalFeedNum;
+ (void)PBArrayAdd_totalLiveNum;
+ (void)PBArrayAdd_totalDynamicNum;
+ (void)PBArrayAdd_enableCGIMonitor;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
