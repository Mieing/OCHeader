@class UIView;
@protocol WCCardCodeAnimatorDelegate;

@interface WCCardCodeAnimator : MMObject {
    UIView *_view;
    UIView *_oldSuperView;
    UIView *_maskView;
    UIView *_newSuperView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _oriFrame;
    BOOL _bAnimating;
    double _scale;
}

@property (weak, nonatomic) id<WCCardCodeAnimatorDelegate> delegate;
@property (nonatomic) BOOL bRotateRight;
@property (nonatomic) double animationDuration;

- (id)initWithView:(id)a0 superView:(id)a1;
- (void)setupView;
- (void)onTapRecognizer:(id)a0;
- (void)handleEnterFullScreen;
- (void)handleExitFullScreen;
- (void).cxx_destruct;

@end
