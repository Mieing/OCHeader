@class NSString, HTSEventContext, NSDictionary, IESLiveGuideModel, IESLiveSubscribeBuySwitchApi, CreateInfoResponse_CreateInfo, IESLiveOpenLivePermissionModel;
@protocol IESLiveAnchorGiftPreferenceService;

@interface IESLiveRoomPayFunctionViewModel : NSObject

@property (retain, nonatomic) IESLiveSubscribeBuySwitchApi *subscribeBuySwitchApi;
@property (copy, nonatomic) NSDictionary *revenuePayFeatConfig;
@property (readonly, nonatomic) CreateInfoResponse_CreateInfo *openLiveModel;
@property (retain, nonatomic) id<IESLiveAnchorGiftPreferenceService> giftPreference;
@property (retain, nonatomic) IESLiveOpenLivePermissionModel *permissionModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (copy, nonatomic) NSString *fansClubModeText;
@property (nonatomic) BOOL showAntiFraudToast;
@property (copy, nonatomic) id /* block */ showAntiFraudAlert;
@property (copy, nonatomic) id /* block */ currentSettingClosedOrOpened;

- (BOOL)shouldShowAntiFraudToast;
- (void)trackSwitchClick:(long long)a0 toStatus:(BOOL)a1;
- (void)showAntiFraudToast:(long long)a0 toStatus:(BOOL)a1;
- (id)settingDetail:(long long)a0 toStatus:(BOOL)a1;
- (id)initWithPermissionModel:(id)a0 guideModel:(id)a1 openLiveModel:(id)a2 trackContext:(id)a3;
- (void)resetGiftSwitch:(BOOL)a0;
- (void)resetRedEnvelopeSwitch:(BOOL)a0;
- (void)resetVIPSwitch:(BOOL)a0 completion:(id /* block */)a1;
- (void)resetFansClubMode:(id)a0;
- (void)resetFansClubSwitch:(BOOL)a0;
- (void).cxx_destruct;

@end
