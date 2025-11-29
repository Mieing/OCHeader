@class UIColor, NSString, UIImageView, AFDLongPressContext, UILabel, UIView;

@interface AWEAwemeLongPressActionCell : UICollectionViewCell <AFDHoverable>

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *iconBackgroundView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIView *highlightMaskView;
@property (retain, nonatomic) UIView *unfoldMaskView;
@property (nonatomic) BOOL enableDynamicTheme;
@property (retain, nonatomic) AFDLongPressContext *context;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (readonly, nonatomic) long long afdHoverStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hoverBegan:(id)a0;
- (void)hoverEnded:(id)a0;
- (void)hoverCancelled:(id)a0;
- (void)setupUIWithContext:(id)a0;
- (void)updateDynamicTheme:(BOOL)a0;
- (void)updateMaskLayer;
- (void)updateIconWithImage:(id)a0;
- (void)updateTitle:(id)a0 attributeTitle:(id)a1 titleColor:(id)a2 backgroundColor:(id)a3;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end
