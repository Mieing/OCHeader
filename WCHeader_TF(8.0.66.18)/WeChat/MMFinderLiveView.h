@class NSString, NSMutableDictionary, UIView, MMFinderLiveViewController;

@interface MMFinderLiveView : MMLiveView <MMLiveViewDirtyNotifyExt, TXPIPManagerExt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGSize { double width; double height; } lastLayoutSize;
@property (retain, nonatomic) NSMutableDictionary *attachWidgetLayerDict;
@property (retain, nonatomic) NSMutableDictionary *attachWidgetContainerDict;
@property (retain, nonatomic) MMFinderLiveViewController *finderLiveViewController;
@property (retain, nonatomic) UIView *overLoadErrorIcon;
@property (retain, nonatomic) UIView *overLoadErrorText;
@property (retain, nonatomic) UIView *overLoadErrorPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutOverloadErrorPage;
- (void)showOverloadErrorPage:(id)a0;
- (void)handleForAttachWidgetsInOperationView:(id)a0;
- (void)layoutUIForAttachWidgets;
- (void)insertAttachWidget:(id)a0 atLayer:(unsigned long long)a1;
- (id)getUserMicWidgetContainerView;
- (id)getAttachWidgetDictInLayerIndex:(unsigned long long)a0;
- (id)getAttachWidgetContainerForLayerIndex:(unsigned long long)a0;
- (void)attachAttachWidgetContainerForLayerIndex:(unsigned long long)a0;
- (id)getSortedContainerIndexNumArr;
- (void)clearAttachWidgets;
- (void)onLiveViewDirtyNotify:(id)a0;
- (void)handleForAudioMicFromAudienceUserOperationViewRefresh:(id)a0 inCDN:(BOOL)a1;
- (void)handleForAudioMicFromAudienceUserHeadImageViewRefresh:(id)a0 inCDN:(BOOL)a1;
- (void)handleForAudioMicFromAudienceUserNickLabelRefresh:(id)a0 inCDN:(BOOL)a1;
- (BOOL)isUseCDN;
- (BOOL)shouldHideNicknameInAudioMicWidgets;
- (void)refreshLiveMinimizeAudioMicWidgets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andTaskId:(id)a1 andDelegate:(id)a2;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)layoutSubviews;
- (void)layoutAvatarView;
- (void)addAvatarView;
- (void)preloadAvatarView;
- (void)updateWeAvatarView;
- (void)updateInnerWindowSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)CGSizeEqualBetween:(struct CGSize { double x0; double x1; })a0 And:(struct CGSize { double x0; double x1; })a1;
- (void)prepareForMaximizeMode;
- (void)prepareForMinimizeMode;
- (id)audioModeCoverImageUrlString;
- (id)minimizeSrcView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getMinimizeSrcFrameForBusiness:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getLocalAudioModeMinimizeSrcFrame;
- (BOOL)isVideoSceneMode;
- (id)getLiveStateText;
- (void)notifyConnectMicStateChangedIfNeeded;
- (void)handleAvatarPan:(id)a0;
- (struct CGPoint { double x0; double x1; })restrictAvatar:(struct CGPoint { double x0; double x1; })a0 InView:(id)a1 withViewBoundsSize:(struct CGSize { double x0; double x1; })a2;
- (void)handleAvatarTap:(id)a0;
- (void)onPIPHandleLogicConfig:(id)a0;
- (void)insertConnectMicViewsToPIPRenderLayer;
- (id)audienceLogReporter;
- (void).cxx_destruct;

@end
