@class UIImageView;

@interface AWEVideoPlayControl : UIView

@property (retain, nonatomic) UIImageView *animationView;
@property (nonatomic) BOOL selected;

- (void)setImageWithName:(id)a0;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (BOOL)canMove;

@end
