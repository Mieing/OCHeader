@class AWESocialSettingModel, NSString;

@interface AWESocialSettingManager : NSObject <AWESocialSettingManagerProtocol>

@property (nonatomic) BOOL hasTrackedTabButtonBgShow;
@property (retain, nonatomic) AWESocialSettingModel *settingModel;
@property (retain, nonatomic) AWESocialSettingModel *latestFetchedSettingModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)handleFetchedModel:(id)a0;
- (void)fetchSocialSetting:(BOOL)a0 context:(id)a1 completion:(id /* block */)a2;
- (id)socialSettingParamsWithCodeLaunch:(BOOL)a0;
- (void)didGetUpdatedWithModel:(id)a0;
- (void)configActivityTimer;
- (void)tabButtonBackgroundShouldChange;
- (void)tab2NearbyBackgroundShouldChange;
- (void)homepageNearbyBackgroundShouldChange;
- (BOOL)shouldShowTabButtonBackground;
- (id)nearbyPostIconUrls;
- (id)nearbyBubbleIconUrls;
- (id)nearbyPostText;
- (void)fetchSocialSettingWithContext:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldShowTabButtonSpecialText;
- (void)requestTabButtonBackgroundForImageView:(id)a0 completion:(id /* block */)a1;
- (void)requestRoamBackgroundImage:(id /* block */)a0;
- (BOOL)isReshapeShowing;
- (BOOL)enableLandingLatestVisitTab;
- (id)recommendedLandingTabName;
- (void)fetchColdLaunchSocialSettingWithContext:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
