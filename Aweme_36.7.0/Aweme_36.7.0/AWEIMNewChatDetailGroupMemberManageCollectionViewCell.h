@class UIImageView, CAShapeLayer, UILabel, UIView;

@interface AWEIMNewChatDetailGroupMemberManageCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *iconBackgroundView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) UIView *highlightMaskView;

+ (id)identifier;

- (void)addSubviews;
- (void)configWithContext:(id)a0;
- (void)configWithTitle:(id)a0 imageName:(id)a1;
- (void)initSubviews;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupLayout;

@end
