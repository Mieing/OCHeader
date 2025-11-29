@class UIView, NSString, IESLiveFlexInteractStore, IESLivePublicScreenInfoModel, NSMutableDictionary, IESLiveRightBottomMutuallyExclusiveItem, IESLiveFlexInteractBannerView, IESLiveBannerListModel;
@protocol IESLiveURLSchemaHandler;

@interface IESLiveFlexInteractFragment : IESLiveRoomComponent <IESLiveFlexInteractReaction, IESLiveSeekAction, IESLiveAutoRotateAction, IESLiveFlexInteractBannerDelegate, IESLiveFlexInteractRouter, IESLiveCustomAutoHideAnimAction, IESLivePublicScreenLifeCircleAction, HTSLiveDiggAction>

@property (retain, nonatomic) IESLiveFlexInteractStore *store;
@property (retain, nonatomic) IESLiveFlexInteractBannerView *interactView;
@property (retain, nonatomic) IESLiveRightBottomMutuallyExclusiveItem *rightBottomItem;
@property (weak, nonatomic) id<IESLiveURLSchemaHandler> schemaHandler;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isUISetuped;
@property (nonatomic) BOOL isBannerLoad;
@property (nonatomic) BOOL enableMoveFlex;
@property (retain, nonatomic) UIView *emptyReplaceView;
@property (nonatomic) double rightControlSpacing;
@property (retain, nonatomic) IESLiveBannerListModel *bannerModel;
@property (retain, nonatomic) IESLivePublicScreenInfoModel *currentPublicScreenInfo;
@property (nonatomic) BOOL isSideMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *interactDict;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)componentOrientationChanged:(long long)a0;
- (void)willAutoRotateToOrientation:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)didAutoRotateToOrientation:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)remoteRoomDataReady:(id)a0;
- (void)onStreamPause;
- (void)onStreamPlay;
- (void)onStreamProgressUpdate:(double)a0 start:(double)a1 latest:(double)a2 trackCurrentSEIts:(id)a3 callTrace:(id)a4;
- (void)createHybridContainer;
- (void)landscapeViewsTransformToHidden:(BOOL)a0;
- (void)portraitViewsTransformToHidden:(BOOL)a0;
- (void)publicScreenWillAppearWithInfoModel:(id)a0;
- (void)continueDiggCount:(long long)a0;
- (void)onSeekEnd;
- (void)notifyAvoidIsSideMode:(BOOL)a0;
- (void)notifyAvoidRightControl:(double)a0;
- (void)bannerDidFinishLoadFalse:(id)a0;
- (void)bannerViewDidCreated:(BOOL)a0;
- (void)bannerViewDidRecieveError:(id)a0;
- (id)getPlayData;
- (void)changeRoomInteractStatus:(long long)a0 data:(id)a1;
- (void)interactReportTrace:(id)a0 params:(id)a1;
- (void)showInteractiveView;
- (void)disappearInteractiveView;
- (void)refreshInteractStatus:(long long)a0 toPublicScreenType:(unsigned long long)a1;
- (BOOL)shouldInsertChatTab;
- (void)p_layoutInteractiveWithLandscape:(BOOL)a0;
- (void)retainInteractViewOnMediaContainer;
- (BOOL)isEcommerceCardShowing;
- (void)hideEcommerceCard;
- (void)sendHybridEvent:(id)a0 params:(id)a1;
- (void)renderBanner:(id)a0;
- (void)receiveMessageReportTrack:(id)a0;
- (void)didReceiveBannerMessage:(id)a0;
- (void)didReceiveInteractiveMessage:(id)a0;
- (void)flexInteractStatusDidChange:(long long)a0;
- (void)refreshInteractStatus:(long long)a0;
- (void)statusErrorOccur:(long long)a0 hiddenReason:(long long)a1;
- (void)bannerDidFinishLoadSuccess:(BOOL)a0 url:(id)a1;
- (void).cxx_destruct;
- (void)setupUI;
- (double)bottomOffset;
- (void)layoutUI;

@end
