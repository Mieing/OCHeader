@class UIColor;

@interface IESSegmentedConfig : NSObject

@property (nonatomic) long long widthStyle;
@property (nonatomic) double itemSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } paddingInset;
@property (nonatomic) struct IESSegmentedControlInsets { double left; double right; } contentInsets;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double didTapAnimationDuration;
@property (nonatomic) BOOL enableUpdatingTitleColorWhenScrolling;
@property (nonatomic) BOOL fixItemSpacing;
@property (nonatomic) BOOL optimizeFixItemSpacing;
@property (nonatomic) BOOL fixDynamicUpdate;
@property (nonatomic) BOOL fixDidTapAnimation;
@property (nonatomic) BOOL fixUpdateSelectedItem;

+ (id)defaultConfig;

- (void).cxx_destruct;
- (id)init;

@end
