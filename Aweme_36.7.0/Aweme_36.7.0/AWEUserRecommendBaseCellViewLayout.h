@interface AWEUserRecommendBaseCellViewLayout : NSObject <NSCopying>

@property (nonatomic) unsigned long long secondaryButtonStyle;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) double buttonPadding;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } centerLabelsPadding;
@property (nonatomic) double centerLabelsVerticalGap;
@property (nonatomic) struct CGSize { double width; double height; } primaryButtonNormalSize;
@property (nonatomic) struct CGSize { double width; double height; } primaryButtonHighlightedSize;
@property (nonatomic) struct CGSize { double width; double height; } secondaryButtonSize;
@property (nonatomic) double avatarWidth;
@property (nonatomic) double buttonCornerRadius;
@property (nonatomic) double titleLabelFont;
@property (nonatomic) double subtitleLabelFont;

+ (id)layoutForIconButton;
+ (id)layout;

- (id)initWithSecondaryButtonStyle:(unsigned long long)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
