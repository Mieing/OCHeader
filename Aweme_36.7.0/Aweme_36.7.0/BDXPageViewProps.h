@class UIColor, NSString;

@interface BDXPageViewProps : NSObject

@property (retain, nonatomic) UIColor *tabbarBackground;
@property (nonatomic) unsigned long long selectedTextSize;
@property (nonatomic) double tabPaddingLeft;
@property (nonatomic) double tabPaddingRight;
@property (nonatomic) double tabHeight;
@property (retain, nonatomic) NSString *textBoldMode;
@property (nonatomic) unsigned long long layoutGravity;
@property (nonatomic) long long selectIndex;
@property (retain, nonatomic) UIColor *selectTextColor;
@property (nonatomic) unsigned long long unSelectedTextSize;
@property (retain, nonatomic) UIColor *unSelectTextColor;
@property (retain, nonatomic) UIColor *tabIndicatorColor;
@property (nonatomic) BOOL hideIndicator;
@property (nonatomic) unsigned long long tabInterSpace;
@property (nonatomic) unsigned long long tabIndicatorWidth;
@property (nonatomic) unsigned long long tabIndicatorHeight;
@property (nonatomic) double tabIndicatorRadius;
@property (nonatomic) double borderTop;
@property (nonatomic) double borderHeight;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) BOOL hideBorder;
@property (nonatomic) BOOL allowHorizontalBounce;
@property (nonatomic) BOOL reserveEdgeback;
@property (nonatomic) BOOL allowHorizontalGesture;
@property (nonatomic) int gestureDirection;
@property (nonatomic) double gestureBeginOffset;

- (void).cxx_destruct;
- (id)init;

@end
