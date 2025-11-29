@class UIColor, NSArray, NSString, UIView, NSMutableArray;

@interface IESLivePlaybackSimpleProgressView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *barBackground;
@property (retain, nonatomic) UIView *barProgress;
@property (retain, nonatomic) UIView *dotView;
@property (nonatomic) double curProgress;
@property (nonatomic) BOOL isPaning;
@property (nonatomic) double touchBeginProgress;
@property (nonatomic) double paningProgress;
@property (retain, nonatomic) NSMutableArray *signViews;
@property (retain, nonatomic) NSArray *signModels;
@property (nonatomic) double barHeight;
@property (retain, nonatomic) UIColor *barColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL barCornered;
@property (nonatomic) struct CGSize { double width; double height; } dotSize;
@property (retain, nonatomic) UIColor *dotColor;
@property (copy, nonatomic) id /* block */ enableSeekWhenShow;
@property (copy, nonatomic) id /* block */ seekAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)coloringProgressWithModels:(id)a0;
- (void)didPanGrogress:(id)a0;
- (void)execSeekAction:(double)a0 needSeek:(BOOL)a1;
- (void)didTapSign:(id)a0;
- (void)reloadUIStyle;
- (void)_updateUIStyleIsAnimation:(BOOL)a0;
- (void)updateSignView;
- (void)_doAnimationStart:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)updateWithProgress:(double)a0;
- (void)setUpView;

@end
