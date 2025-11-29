@class UIButton, BDSCImageView, UILabel;

@interface BDByteScreenCastXsgNotFindNotiTipView : UIView

@property (retain, nonatomic) BDSCImageView *icon;
@property (retain, nonatomic) UIButton *tagButton;
@property (retain, nonatomic) UILabel *titleLabel;

- (id)localConfig;
- (id)initWithImageUrl:(id)a0 Title:(id)a1 tagText:(id)a2;
- (id)initWithImageNamed:(id)a0 Title:(id)a1 tagText:(id)a2;
- (void)updateTagShow:(BOOL)a0;
- (void)setupSubviewsWithTitle:(id)a0 tagText:(id)a1;
- (struct CGPoint { double x0; double x1; })tagButtonPoint;
- (double)tagButtonWidth;
- (double)titleLableHeight;
- (id)initWithImage:(id)a0 Title:(id)a1 tagText:(id)a2;
- (double)iconSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)rebuildConstraints;

@end
