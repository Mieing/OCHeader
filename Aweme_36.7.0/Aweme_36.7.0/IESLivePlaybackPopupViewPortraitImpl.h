@class IESLivePlaybackPopupItem, NSString, UIView, UIScrollView, UITapGestureRecognizer;
@protocol IESLivePlaybackPopupPanService;

@interface IESLivePlaybackPopupViewPortraitImpl : UIView <UIGestureRecognizerDelegate, CAAnimationDelegate, IESLivePlaybackPopupView, IESLivePlaybackPopupDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) BOOL showing;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (nonatomic) BOOL listDidReachTop;
@property (nonatomic) BOOL listIsDragging;
@property (weak, nonatomic) IESLivePlaybackPopupItem *item;
@property (weak, nonatomic) UIScrollView *insideListView;
@property (retain, nonatomic) UIView *accessView;
@property (retain, nonatomic) id<IESLivePlaybackPopupPanService> panService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bottomFrame;
- (void)showBackAfterPan;
- (void)showInAutoLayout;
- (void)showforKey:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })showingFrame;
- (void)showAnimationInAutoLayout;
- (void)doSomethingWhenDraggingEnd:(id)a0;
- (void)tap:(id)a0;
- (void)animationDidStart:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)removeFromSuperview;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)hide;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)_setup;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)show;
- (id)initWithItem:(id)a0;
- (void)updateFrame;
- (void)clean;
- (void)p_addObservers;

@end
