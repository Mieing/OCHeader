@class UIColor;

@interface AWEECMallSegmentedConfig : NSObject

@property (nonatomic) long long widthStyle;
@property (nonatomic) double itemSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } paddingInset;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL enableUpdatingTitleColorWhenScrolling;
@property (nonatomic) BOOL fixItemSpacing;

+ (id)defaultConfig;

- (void).cxx_destruct;

@end
