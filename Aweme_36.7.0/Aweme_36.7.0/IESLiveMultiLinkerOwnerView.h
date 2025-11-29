@class UIView, NSString, UITapGestureRecognizer, IESLiveAudiencePauseTipView, IESLiveMultiLinkerApi, HTSLiveGradientBackgroundView, IESLiveRevenueInteractEnlargeActionPanel, IESLiveAnchorMultiLinkerLoadingView;
@protocol HTSLiveViewHierarchyProvider, IESLiveInteractUserModel, IESLiveMultiLinkerProvider, HTSLiveDiggAction;

@interface IESLiveMultiLinkerOwnerView : HTSEventForwardingView <UIGestureRecognizerDelegate, IESLiveMultiLinkerGridViewProtocol>

@property (nonatomic) unsigned long long layoutType;
@property (weak, nonatomic) id<IESLiveMultiLinkerProvider> provider;
@property (retain, nonatomic) IESLiveMultiLinkerApi *api;
@property (retain, nonatomic) IESLiveAudiencePauseTipView *tipView;
@property (retain, nonatomic) HTSLiveGradientBackgroundView *tipBackgroundView;
@property (retain, nonatomic) HTSLiveGradientBackgroundView *coverView;
@property (retain, nonatomic) IESLiveRevenueInteractEnlargeActionPanel *ownerActionPanel;
@property (retain, nonatomic) id<IESLiveInteractUserModel> user;
@property (nonatomic) BOOL didUpdateUser;
@property (weak, nonatomic) id<HTSLiveViewHierarchyProvider> hierarchyProvider;
@property (retain, nonatomic) id<HTSLiveDiggAction> diggActionCreator;
@property (retain, nonatomic) UITapGestureRecognizer *singleTapRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *doubleTapRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL didUpdate;
@property (weak, nonatomic) UIView *tipViewSuperview;
@property (retain, nonatomic) IESLiveAnchorMultiLinkerLoadingView *loadingView;

- (id)initWithDIContext:(id)a0;
- (void)bindAction;
- (void)sendMultiLinkerEvent:(unsigned long long)a0 withParams:(id)a1;
- (void)updateActive:(BOOL)a0;
- (id)p_makeGradientViewFromPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1 fromColor:(id)a2 toColor:(id)a3;
- (void)onReceivedClearNotification:(BOOL)a0;
- (void)showUserProfilePanel:(id)a0;
- (void)updateLayoutWithType:(unsigned long long)a0;
- (void)p_showOrHideTipView:(BOOL)a0;
- (void)updateOwnerTipBackgroungViewIfNeeed;
- (void)onOwnerViewClicked:(id)a0;
- (void)onOwnerViewDoubleTap:(id)a0;
- (void)updateDisableForwarding;
- (void)anchorEnlargeWithSelf;
- (void)anchorEnlargeWithAdmin;
- (void)requestUpdateLayoutWithAction:(int)a0 anchorUIOperationLayout:(int)a1;
- (void).cxx_destruct;
- (id)connectionType;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)setupUI;
- (void)updateUser:(id)a0;

@end
