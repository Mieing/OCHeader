@class NSString;

@interface AFDPlayerInteractiveCheckManager : NSObject <AFDPlayerInteractiveCheckManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowViewerListWithPreviousPage:(id)a0 referString:(id)a1 enterFrom:(id)a2 awemeModel:(id)a3;
+ (BOOL)canShowLongPressButtonBulletScreenWithPreviousPage:(id)a0 referString:(id)a1 enterFrom:(id)a2 awemeModel:(id)a3;
+ (BOOL)canShowBulletScreenWithPreviousPage:(id)a0 referString:(id)a1 enterFrom:(id)a2 awemeModel:(id)a3;
+ (BOOL)canOpenDuetCameraWithAwemeModel:(id)a0;
+ (BOOL)willSwithVideoOwnerWithReferString:(id)a0 enterFrom:(id)a1;
+ (BOOL)canShowBottomViewedViewWithPreviousPage:(id)a0 referString:(id)a1 enterFrom:(id)a2 awemeModel:(id)a3;
+ (BOOL)canShowPrivacyBottomViewWithPreviousPage:(id)a0 referString:(id)a1 enterFrom:(id)a2 awemeModel:(id)a3;
+ (BOOL)isMyVideoWithAwemeModel:(id)a0;
+ (BOOL)isCloseBulletStatus;
+ (void)updateUserBulletSwitchStatus:(BOOL)a0;
+ (BOOL)canShowPushGuideBottomBarWithPreviousPage:(id)a0 referString:(id)a1 enterFrom:(id)a2 awemeModel:(id)a3;
+ (BOOL)isPreSkiiMomentUsingAwemeModel:(id)a0;
+ (BOOL)canShowPrivacyBottomViewWithAwemeModel:(id)a0;
+ (BOOL)canShowPrivacySettingButtonWithPreviousPage:(id)a0 referString:(id)a1 enterFrom:(id)a2 awemeModel:(id)a3;
+ (BOOL)canShowToPublicButtonWithAwemeModel:(id)a0;
+ (BOOL)isBaseConditionOK;
+ (BOOL)isVideoFromMyPageWithPreviousPage:(id)a0 referString:(id)a1 enterFrom:(id)a2;
+ (BOOL)__bulletScreenBaseCheckWithPreviousPage:(id)a0 referString:(id)a1 enterFrom:(id)a2 awemeModel:(id)a3;
+ (BOOL)isViewedABTestOn;
+ (BOOL)shouldShowViewerRecordViewWithDataList:(id)a0 awemeModel:(id)a1 referString:(id)a2;
+ (BOOL)canShowToNormalButtonWithAwemeModel:(id)a0;
+ (BOOL)canShowBottomViewedViewWithAwemeModel:(id)a0;
+ (BOOL)isMyVideoWithPreviousPage:(id)a0 referString:(id)a1 enterFrom:(id)a2 awemeModel:(id)a3;
+ (BOOL)canShowDataAnalyticsButtonWithAwemeModel:(id)a0;


@end
