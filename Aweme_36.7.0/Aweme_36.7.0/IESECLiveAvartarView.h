@class UIImageView;

@interface IESECLiveAvartarView : UIView

@property (nonatomic) struct CGSize { double width; double height; } avatarSize;
@property (nonatomic) double centerGap;
@property (nonatomic) double blankWidth;
@property (nonatomic) BOOL showGap;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIImageView *avatar;

- (void)updateURL:(id)a0 withPlaceholderImage:(id)a1;
- (id)gapMaskLayer;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateUI;

@end
