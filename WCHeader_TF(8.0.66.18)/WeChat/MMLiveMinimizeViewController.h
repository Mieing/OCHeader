@class UIView, NSString, MMLiveMinimizeBackgroundMoveView;
@protocol MMLiveMinimizeViewControllerDelegate;

@interface MMLiveMinimizeViewController : MMUIViewController <MMLiveMinimizeBackgroundMoveViewDelegate>

@property (retain, nonatomic) MMLiveMinimizeBackgroundMoveView *backgroundMoveView;
@property (retain, nonatomic) UIView *liveView;
@property (weak, nonatomic) id<MMLiveMinimizeViewControllerDelegate> liveMinimizeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveView:(id)a0;
- (void)viewDidLoad;
- (id)moveView;
- (id)blurView;
- (void)setBackImage:(id)a0;
- (void)adsorbToWindow;
- (void)initBackgroundMoveView;
- (void)viewDidLayoutSubviews;
- (void)showView;
- (void)hideView;
- (void)onMMLiveMinimizeBackgroundMoveViewTap;
- (void).cxx_destruct;

@end
