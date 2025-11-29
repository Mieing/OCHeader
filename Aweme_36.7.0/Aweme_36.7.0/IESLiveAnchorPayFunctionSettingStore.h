@class HTSEventContext, IESLiveGuideModel, IESLiveSubscribeBuySwitchApi, IESLiveAnchorPayFunctionSettingCellItem, CreateInfoResponse_CreateInfo, NSDictionary, NSMutableArray, IESLiveOpenLivePermissionModel, IESLiveAnchorPayFunctionSettingSectionModel;
@protocol IESLiveAnchorGiftPreferenceService;

@interface IESLiveAnchorPayFunctionSettingStore : NSObject

@property (retain, nonatomic) id<IESLiveAnchorGiftPreferenceService> giftPreference;
@property (retain, nonatomic) IESLiveOpenLivePermissionModel *permissionModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveSubscribeBuySwitchApi *subscribeBuySwitchApi;
@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (retain, nonatomic) CreateInfoResponse_CreateInfo *openLiveModel;
@property (nonatomic) BOOL allowBuyVIP;
@property (retain, nonatomic) IESLiveAnchorPayFunctionSettingCellItem *fansclubModeItem;
@property (retain, nonatomic) IESLiveAnchorPayFunctionSettingSectionModel *fansclubSection;
@property (copy, nonatomic) NSDictionary *revenuePayFeatConfig;
@property (retain, nonatomic) NSMutableArray *sections;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) id /* block */ allSettingClosedOrOpened;

- (void)didSetAttachingDIContext;
- (BOOL)shouldShowAntiFraudToast;
- (void)checkPayFunctionCloseFully;
- (void)trackSwitchClick:(long long)a0 toStatus:(BOOL)a1;
- (void)setupSections;
- (void)showAntiFraudToast:(long long)a0 toStatus:(BOOL)a1;
- (id)settingDetail:(long long)a0 toStatus:(BOOL)a1;
- (id)initWithPermissionModel:(id)a0 guideModel:(id)a1 openLiveModel:(id)a2 trackContext:(id)a3;
- (void)resetGiftSwitch:(BOOL)a0;
- (void)resetFansclubSwitch:(BOOL)a0;
- (void)resetRedEnvelopeSwitch:(BOOL)a0;
- (void)resetVIPSwitch:(BOOL)a0 completion:(id /* block */)a1;
- (void)resetFansClubMode:(id)a0;
- (BOOL)clearRedDotWithItemType:(long long)a0;
- (id)getAllSettingsParams;
- (void).cxx_destruct;

@end
