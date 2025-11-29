@class NSString, NSArray;

@interface AWEEcomSearchCouponTagViewUIConfig : NSObject

@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) double textFont;
@property (copy, nonatomic) NSString *textHexColorString;
@property (copy, nonatomic) NSString *labelBgHexColorString;
@property (retain, nonatomic) NSArray *gradientColors;
@property (nonatomic) double showStyle;
@property (nonatomic) double spaceBetweenIconAndText;

- (void).cxx_destruct;
- (id)init;

@end
