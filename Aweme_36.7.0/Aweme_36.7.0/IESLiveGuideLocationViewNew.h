@class HTSEventContext, NSString, IESLiveGuideModel, UIImageView, UILabel, UISwitch, IESLiveGuideLocationDetailPanelView;
@protocol IESLiveGuideLocationRouter, IESLiveLocationService, IESLiveGuideLocationViewNewDelegate;

@interface IESLiveGuideLocationViewNew : UIView <IESLiveGuideActions, IESLiveGuideLocationOpenService>

@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (nonatomic) BOOL showLocation;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UISwitch *switcher;
@property (retain, nonatomic) id<IESLiveLocationService> locationService;
@property (retain, nonatomic) id<IESLiveGuideLocationRouter> guideLocationRouter;
@property (nonatomic) BOOL hasPermission;
@property (retain, nonatomic) NSString *locationStr;
@property (nonatomic) BOOL privateMode;
@property (nonatomic) BOOL hasGoToSettingsPage;
@property (nonatomic) BOOL isInLiveTab;
@property (nonatomic) BOOL viewWillAppeared;
@property (retain, nonatomic) IESLiveGuideLocationDetailPanelView *detailPanel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) NSString *poiName;
@property (retain, nonatomic) NSString *locationDetail;
@property (weak, nonatomic) id<IESLiveGuideLocationViewNewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)willSwitchToOtherTab;
- (void)willSwitchToLiveTab;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (void)openLocation;
- (void)authorizeLocationPermission:(BOOL)a0;
- (void)openPrivateMode;
- (BOOL)isPOINewStyle;
- (id)initWithGuideModel:(id)a0 trackContext:(id)a1 diContext:(id)a2;
- (void)openLocationPanel;
- (BOOL)hasOpenLiveLocationPermissionBefore;
- (void)onClickOpenLocation;
- (void)authorizeLocationPermission:(BOOL)a0 fromCheckBtn:(BOOL)a1;
- (void)closeLocationPermissionFromCheckBtn:(BOOL)a0;
- (id)hintTitleWithLiveType:(long long)a0;
- (void)updateLocationLabelText:(id)a0;
- (BOOL)isEnablePOI;
- (void)showCloseAlert;
- (void)trackCloseAlertShow;
- (void)trackCloseAlertClick:(id)a0;
- (void)storeOpenLiveLocationPermission:(BOOL)a0;
- (void)openLocationPermissionWithLocation:(id)a0;
- (void)goToLocateSettings;
- (id)locationInfo;
- (void).cxx_destruct;
- (id)iconImage;
- (void)viewWillAppear;
- (void)check;
- (void)setupUI;

@end
