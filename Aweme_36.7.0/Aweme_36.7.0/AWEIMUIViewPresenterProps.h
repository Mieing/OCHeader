@class UIColor, NSString;

@interface AWEIMUIViewPresenterProps : NSObject

@property (nonatomic) BOOL isUserSetBackgroundColor;
@property (nonatomic) BOOL isUserSetClipsToBounds;
@property (nonatomic) BOOL isUserSetLayerMasksToBounds;
@property (nonatomic) BOOL isUserSetHidden;
@property (nonatomic) BOOL isUserSetInteractionEnabled;
@property (nonatomic) BOOL isUserSetAccessibilityElement;
@property (nonatomic) BOOL isUserSetAccessibilityTraits;
@property (nonatomic) BOOL isUserSetContentMode;
@property (nonatomic) BOOL isUserSetHitTest;
@property (nonatomic) BOOL clipsToBounds;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double alpha;
@property (nonatomic) BOOL hidden;
@property (nonatomic) long long contentMode;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } btd_hitTestEdgeInsets;
@property (nonatomic) double layerBorderWidth;
@property (retain, nonatomic) UIColor *layerBorderColor;
@property (nonatomic) BOOL layerMasksToBounds;
@property (nonatomic) double layerCornerRadius;
@property (nonatomic) BOOL isAccessibilityElement;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (copy, nonatomic) NSString *accessibilityHint;
@property (copy, nonatomic) id /* block */ animationBlock;

- (void).cxx_destruct;
- (id)init;

@end
