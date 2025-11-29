@class UIImageView, UILabel;

@interface IESLiveInteractionGuestAFKOverlapView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *afkLabel;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;

- (void)setupWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 iconSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
