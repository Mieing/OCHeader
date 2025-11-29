@class AFDLongPressContext, UIImageView, CAShapeLayer, UILabel, UIView, AWEAwemeLongPressFunctionModel;

@interface AWEAwemeLongPressDuetCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIImageView *iconView1;
@property (retain, nonatomic) UIImageView *iconView2;
@property (retain, nonatomic) UIView *circleView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIImageView *sendView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) CAShapeLayer *containerMaskLayer;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *onlineDotView;
@property (nonatomic) BOOL enableDynamicTheme;
@property (retain, nonatomic) UIView *textView;
@property (weak, nonatomic) AWEAwemeLongPressFunctionModel *model;
@property (weak, nonatomic) AFDLongPressContext *context;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (double)__nameLabelDuxFontSizeIfNecessary;
- (void)updateIconViewNeedClipToBounds:(BOOL)a0;
- (void)setupUIWithContext:(id)a0;
- (void)updateSeparateLineVisibility:(BOOL)a0;
- (void)updateCellCorner:(BOOL)a0 cornerPosition:(unsigned long long)a1 topPadding:(double)a2 bottomPadding:(double)a3;
- (void)updateDynamicTheme:(BOOL)a0;
- (void)updateDoubleIconsViewNeedClipToBounds:(BOOL)a0;
- (void)updateIconWithURL:(id)a0 needClipToBounds:(BOOL)a1;
- (void)updateIconsWithURL1:(id)a0 URL2:(id)a1 needClipToBounds:(BOOL)a2;
- (void)updateOnlineStatus:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)updateModel:(id)a0;
- (void)updateTitle:(id)a0;

@end
