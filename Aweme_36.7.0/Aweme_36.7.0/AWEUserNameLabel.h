@class UIColor, UIFont, UIImageView, UILabel, UIView;

@interface AWEUserNameLabel : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (nonatomic) double badge;
@property (nonatomic) double interval;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) BOOL enableAsyncRender;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UILabel *relationLabel;
@property (nonatomic) BOOL useFrameLayout;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) double nameLabelMaxWidthWhenMoreThanOneLine;
@property (nonatomic) BOOL isLayoutFromBackToFront;
@property (nonatomic) BOOL isCentralStyle;

- (void)addVerifiedIcon:(BOOL)a0;
- (BOOL)isEmptyString:(id)a0;
- (void)setVerifiedIconName:(id)a0 fontSize:(double)a1 shouldAdd:(BOOL)a2;
- (void)setVerifiedIconImage:(id)a0 fontSize:(double)a1 shouldAdd:(BOOL)a2;
- (id)initWithAsyncRenderEnabled:(BOOL)a0;
- (double)nameLabelPreferredWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 asyncRenderEnabled:(BOOL)a1;
- (double)countLabelWitdh;
- (void)setVerifiedIconWithFontSize:(double)a0 shouldAdd:(BOOL)a1;
- (void)removeVerifiedIcon;
- (void)updateLabelConstraints;
- (double)labelRightMargin;
- (void).cxx_destruct;
- (id)init;
- (double)preferredWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (double)preferredHeight;
- (void)layoutSubviews;
- (void)setupUI;

@end
