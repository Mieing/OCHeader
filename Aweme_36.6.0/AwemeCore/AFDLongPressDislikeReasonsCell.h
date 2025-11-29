@class AFDLongPressContext, UIImageView, CAShapeLayer, UILabel, UIView, AWEAwemeLongPressFunctionModel;

@interface AFDLongPressDislikeReasonsCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) BOOL enableDynamicTheme;
@property (retain, nonatomic) AWEAwemeLongPressFunctionModel *model;
@property (retain, nonatomic) AFDLongPressContext *context;
@property (copy, nonatomic) id /* block */ dismissLongPressMenuBlock;
@property (copy, nonatomic) id /* block */ buttonClickedTrackBlock;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (double)__nameLabelDuxFontSizeIfNecessary;
- (void)updateIconViewNeedClipToBounds:(BOOL)a0;
- (void)setupUIWithContext:(id)a0;
- (void)updateIconWithImage:(id)a0 needClipToBounds:(BOOL)a1;
- (void)updateSeparateLineVisibility:(BOOL)a0;
- (void)updateCellCorner:(BOOL)a0 cornerPosition:(unsigned long long)a1 topPadding:(double)a2 bottomPadding:(double)a3;
- (void)updateDynamicTheme:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)updateTitle:(id)a0;

@end
