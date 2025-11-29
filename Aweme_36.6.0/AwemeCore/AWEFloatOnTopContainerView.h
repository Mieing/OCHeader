@class AWEButton, UIImageView;
@protocol AWEFloatOnTopContainerViewDelegate;

@interface AWEFloatOnTopContainerView : AWEFloatOnTopBasicContainer

@property (retain, nonatomic) AWEButton *closeTapArea;
@property (retain, nonatomic) UIImageView *closeImageView;
@property (weak, nonatomic) id<AWEFloatOnTopContainerViewDelegate> delegate;

+ (id)showOnView:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (void)close;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tap;

@end
