@protocol MMLiveCustomTransitionDelegate;

@interface MMLiveCustomTransition : NSObject

@property (weak, nonatomic) id<MMLiveCustomTransitionDelegate> delegate;

- (long long)getCurrentTransitionState;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getMinimizeFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getMinimizeLiveFrameInScreen;
- (long long)getPreviousOrientation;
- (id)getSnapShotImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getMinimizeFromRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getMaximizeToRect;
- (id)getExtendTransitionContainerBackView;
- (void).cxx_destruct;

@end
