@class UIImageView, UIView, UILabel, IESECInnerScrollView;

@interface IESECAutoPageButton : UIControl

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) IESECInnerScrollView *pageScrollView;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) struct CGSize { double width; double height; } pageSize;
@property (retain, nonatomic) UILabel *currentLabel;
@property (retain, nonatomic) UILabel *forwardLabel;
@property (nonatomic) BOOL forwardState;

- (void)startAutoPage;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
