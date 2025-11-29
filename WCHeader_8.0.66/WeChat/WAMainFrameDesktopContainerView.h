@class UIScreenEdgePanGestureRecognizer, MMUIViewController, UIView, NSString, WAMainFrameDesktopWeAppViewController, UIImageView, UISearchBar, UIBarButtonItem, UILabel;
@protocol WAMainFrameDesktopContainerViewDelegate;

@interface WAMainFrameDesktopContainerView : UIView <UIGestureRecognizerDelegate, WAMainFrameDesktopWeAppViewControllerDelegate> {
    UIView *_blurView;
    UIView *_transformContainerView;
    WAMainFrameDesktopWeAppViewController *_weAppVC;
}

@property (weak, nonatomic) UISearchBar *realSearchBar;
@property (retain, nonatomic) UIView *fakeTopTitleView;
@property (retain, nonatomic) UIImageView *fakeTopTitleIcon;
@property (retain, nonatomic) UILabel *fakeTopTitleLabel;
@property (retain, nonatomic) UIView *fakeTopTitleSeperateLine;
@property (retain, nonatomic) UIBarButtonItem *savedLeftButtonItem;
@property (nonatomic) BOOL shouldRecoverLeftButton;
@property (weak, nonatomic) id<WAMainFrameDesktopContainerViewDelegate> delegate;
@property (weak, nonatomic) MMUIViewController *containerVC;
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *edgeGesture;
@property (nonatomic) unsigned long long backAction;
@property (nonatomic) BOOL isMyWeApp;
@property (retain, nonatomic) NSString *openSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initView;
- (void)initContentView;
- (void)initFakeTopTitleView;
- (void)updateAlphaProgress:(double)a0;
- (void)layoutSubviews;
- (void)switchWeAppType:(BOOL)a0;
- (void)reset;
- (void)onBack;
- (void)showFakeLeftButton;
- (void)showRealLeftButton;
- (void)setCloseLeftButton;
- (void)animateToShow:(BOOL)a0 sessionId:(id)a1 scrollToBottom:(BOOL)a2;
- (void)doShowAnimate;
- (void)animateToHide;
- (void)initRealSearchBarViewIfNeeded;
- (void)onTapSearchArea;
- (void)onDragUpToClose;
- (void)notifyWeAppChanged;
- (void)handlerScreenEdgeGesture:(id)a0;
- (BOOL)isSweepFastInVelocity:(struct CGPoint { double x0; double x1; })a0;
- (id)getReportSessionId;
- (void)reportExposure;
- (void).cxx_destruct;

@end
