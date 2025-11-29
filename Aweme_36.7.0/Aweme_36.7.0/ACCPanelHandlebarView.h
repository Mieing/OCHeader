@class UIPanGestureRecognizer, UIView;
@protocol ACCPanelHandlebarViewDelegate;

@interface ACCPanelHandlebarView : UIView

@property (retain, nonatomic) UIView *handlebar;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (weak, nonatomic) id<ACCPanelHandlebarViewDelegate> delegate;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupViews;
- (id)initWithHeight:(double)a0;
- (void)handlePanGesture:(id)a0;
- (void)setupGestures;

@end
