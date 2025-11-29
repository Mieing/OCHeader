@class UIButton, UIView;
@protocol IESLiveAudienceNativeAppVideoPlayerContainerViewDelegate;

@interface IESLiveAudienceNativeAppVideoPlayerContainerView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) struct CGPoint { double x; double y; } movementStartPoint;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } movementStartFrame;
@property (retain, nonatomic) UIButton *closeButton;
@property (weak, nonatomic) id<IESLiveAudienceNativeAppVideoPlayerContainerViewDelegate> delegate;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedFrameWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)showOnView:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateFloatOnViewFrameWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withView:(id)a1;

- (void)animateToAdjustedFrame;
- (void)dismiss;
- (void).cxx_destruct;
- (void)closeAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)pan:(id)a0;
- (void)tapAction;

@end
