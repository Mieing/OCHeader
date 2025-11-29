@class NSString, UILabel, UIView, UIButton;

@interface AWEHPTopTabEditCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSString *accessibilityTitleLabel;
@property (retain, nonatomic) UIButton *reorderButton;
@property (nonatomic) BOOL isMovable;
@property (retain, nonatomic) UIView *dragSnapShot;
@property (copy, nonatomic) id /* block */ showCannotMoveToast;

+ (id)identifier;

- (void)p_setUI;
- (void)p_updateCorners;
- (void)p_newSetUI;
- (void)p_oldSetUI;
- (void)tapReorderButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateWithModel:(id)a0;

@end
