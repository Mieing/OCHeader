@class UIColor, NSArray, UILabel, AWEGoodsVisitorModel;

@interface AWEGoodsVisitorView : UIView

@property (retain, nonatomic) NSArray *avatars;
@property (retain, nonatomic) UILabel *visitorCountLabel;
@property (retain, nonatomic) AWEGoodsVisitorModel *visitor;
@property (nonatomic) double avatarsCenterDistance;
@property (nonatomic) double avatarsRadius;
@property (nonatomic) BOOL clearBorder;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double countLabelOffset;
@property (retain, nonatomic) UIColor *countLabelTextColor;

- (void)configWithVisitor:(id)a0;
- (void)updateAvatars;
- (double)p__avatarsRadius;
- (double)p__avatarsCenterDistance;
- (void)updateAvatarView:(id)a0 visitor:(id)a1 URLModel:(id)a2;
- (double)visitorCountLabelLeft;
- (double)visitorCountLabelMaxX;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;

@end
