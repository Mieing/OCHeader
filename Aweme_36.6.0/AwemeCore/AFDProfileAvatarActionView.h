@class BDImageView, UIImageView, UIView, UILabel, AFDProfileAvatarFunctionModel;

@interface AFDProfileAvatarActionView : UIView

@property (retain, nonatomic) AFDProfileAvatarFunctionModel *model;
@property (retain, nonatomic) UIView *backgroundMaskView;
@property (retain, nonatomic) UIView *imageBackgroundView;
@property (retain, nonatomic) UIImageView *nextView;
@property (retain, nonatomic) BDImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;

- (void)rotateAnimation;
- (void)p_updateUI;
- (double)actionAreaLongCellWidth;
- (BOOL)shouldAccountShowAIGCLibrary;
- (void)p_updateAIGCIcon;
- (void)updateWithStatus:(BOOL)a0 animated:(BOOL)a1;
- (void)updateFormatDesc:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithModel:(id)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)layoutSubviews;

@end
