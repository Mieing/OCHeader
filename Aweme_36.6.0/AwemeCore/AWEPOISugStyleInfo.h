@class NSString, UIFont;

@interface AWEPOISugStyleInfo : NSObject

@property (nonatomic) double itemLeftPadding;
@property (nonatomic) double itemRightPadding;
@property (nonatomic) double itemHeight;
@property (retain, nonatomic) UIFont *itemButtonFont;
@property (retain, nonatomic) NSString *itemButtonNormalColorName;
@property (retain, nonatomic) NSString *itemButtonBackgroundColorName;
@property (retain, nonatomic) UIFont *itemSuffixButtonFont;
@property (retain, nonatomic) NSString *itemSuffixButtonNormalColorName;
@property (nonatomic) double itemSuffixButtonLeftPadding;
@property (nonatomic) double itemSearchIconWidth;
@property (nonatomic) double itemSearchIconRightPadding;
@property (retain, nonatomic) NSString *itemSearchIconName;
@property (nonatomic) double itemCornerRadius;
@property (nonatomic) double itemBorderWidth;
@property (nonatomic) double itemSpace;
@property (nonatomic) double cellTopOffset;
@property (nonatomic) double cellBottomOffset;
@property (nonatomic) BOOL hiddenGradientView;

- (void).cxx_destruct;

@end
