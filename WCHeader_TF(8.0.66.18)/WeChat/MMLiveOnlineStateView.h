@class MMLoadingView, MMLiveHalfScreenTitleBarView, MMLiveOnlineUserLogic, NSString, UIView, UIScrollView;
@protocol MMLiveOnlineStateViewDelegate;

@interface MMLiveOnlineStateView : MMLiveHalfScreenPanelView <MMLiveHalfScreenTitleBarViewDelegate, UIGestureRecognizerDelegate, ILinkEventExt, MMLiveOnlineUserLogicDelegate>

@property (retain, nonatomic) UIView *onlineContentView;
@property (retain, nonatomic) MMLoadingView *loadingView;
@property (retain, nonatomic) MMLiveHalfScreenTitleBarView *titleBar;
@property (nonatomic) double viewTopAtPanBegin;
@property (nonatomic) double previousPanPositionY;
@property (readonly, nonatomic) UIScrollView *onlineUsersScrollView;
@property (readonly, nonatomic) MMLiveOnlineUserLogic *onlineUserLogic;
@property (weak, nonatomic) id<MMLiveOnlineStateViewDelegate> delegate;
@property (nonatomic) unsigned long long onlineViewCount;
@property (nonatomic) long long onlineUserCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)dealloc;
- (id)getOnlineButtonTitle:(unsigned long long)a0;
- (void)initView;
- (void)layoutContentView;
- (void)layoutSubviews;
- (id)createNoUserLabel;
- (BOOL)kickAudience:(id)a0;
- (void)closeWithAnimation:(BOOL)a0;
- (void)openWithAnimation:(BOOL)a0 completeBlock:(id /* block */)a1;
- (void)fetchOnlineUserList;
- (void)reloadData;
- (void)startLoading;
- (void)stopLoading:(BOOL)a0;
- (void)handleUIOrientationChanged:(id)a0;
- (BOOL)shouldInstallCollectionViewInteractivePan;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)a0;
- (void)handleCollectionViewPanGesture:(id)a0;
- (void).cxx_destruct;

@end
