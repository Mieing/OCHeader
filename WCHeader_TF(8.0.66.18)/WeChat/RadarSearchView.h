@class UIView, NSString, SonicView, UIImageView, UIButton, NSMutableArray, WCUIAlertView, RSVerifyView, AVAudioPlayer;
@protocol RadarSearchViewDelegate;

@interface RadarSearchView : MMUIImageView <IShortCutExt, ILocationMgrExt, IRadarSearchExt, IMsgExt, UIScrollViewDelegate, RSHeadImageViewDelegate, RSVerifyViewDelegate, CNetworkStatusExt, FriendAsistSessionExt> {
    UIView *_backgroundView;
    UIView *_tipsView;
    UIButton *_closeBtn;
    UIImageView *_selfHeadView;
    UIImageView *_radarLightView;
    SonicView *_radarAllHeadScrollView;
    RSVerifyView *_verifyView;
    NSMutableArray *_foundResult;
    AVAudioPlayer *_popPlayer;
    AVAudioPlayer *_holdPlayer;
    BOOL m_bIsRespondHeadImgClicking;
    long long m_locationErrorCode;
    BOOL m_bIsShowNetworkTips;
    double m_startSearchTime;
    BOOL m_bIsNeedToReport;
    WCUIAlertView *_currAlertView;
}

@property (weak, nonatomic) id<RadarSearchViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initSkyBackground;
- (id)init;
- (void)initBackgroundView;
- (void)initSelfHeadView;
- (void)initCloseButton;
- (void)initVerifyView;
- (id)generateCloseButton;
- (void)initTipsView;
- (void)showTipsView;
- (void)hideTipsView;
- (void)showTipsWithType:(long long)a0;
- (void)showFindFailTips;
- (void)resetDataMember;
- (void)layoutSubviews;
- (void)initView;
- (void)onClose:(BOOL)a0;
- (void)onClose;
- (void)startPlayPopupSound;
- (void)stopPlayPopupSound;
- (void)resumeLightAnimation;
- (void)startLightAnimation;
- (void)stopLightAnimation;
- (void)hideTipsViewIfNeed;
- (void)startSearch;
- (void)realStartSearch;
- (void)stopSearch;
- (void)handleSomeoneAppear:(id)a0;
- (void)OnRadarSearch:(id)a0 ErrCode:(int)a1;
- (void)OnAddFriend:(id)a0 ErrCode:(int)a1;
- (void)OnVerifyUsr:(id)a0 ErrCode:(int)a1;
- (void)OnRetrieveLocationTimeout;
- (void)OnRetrieveLocationOk;
- (void)OnRetrieveLocationError:(int)a0;
- (void)showAlertForLocationAuthorization;
- (void)goToSettingLocationAuthorization;
- (id)parseXML:(id)a0;
- (void)onFriendAssistAddMsg:(id)a0;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)onRSHeadImageClicked:(id)a0;
- (void)onStatusViewHidden:(id)a0;
- (void)onRSVerifyViewHide;
- (id)getCurViewController;
- (void)onExpose:(id)a0;
- (void)ReachabilityChange:(unsigned int)a0;
- (void)onPerformShortCut:(id)a0;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)a0;
- (void).cxx_destruct;

@end
