@class UIColor, UIFont, NSString;

@interface AWESearchSeedFilterViewContConfiguration : NSObject

@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *selectedTextColor;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIFont *selectedTextFont;
@property (retain, nonatomic) UIColor *bgColor;
@property (retain, nonatomic) UIColor *selectedBgColor;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIColor *selectedBorderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double selectedBorderWidth;
@property (nonatomic) double borderCordius;
@property (retain, nonatomic) UIColor *borderLineColor;
@property (retain, nonatomic) UIColor *selectedBorderLineColor;
@property (nonatomic) double borderLineWidth;
@property (nonatomic) double borderLinePos;
@property (nonatomic) double borderLineLength;
@property (retain, nonatomic) NSString *imgSelectedUrl;
@property (retain, nonatomic) NSString *imgSelectedUrlDark;
@property (retain, nonatomic) NSString *imgUnSelectedUrl;
@property (retain, nonatomic) NSString *imgUnSelectedUrlDark;

- (void).cxx_destruct;

@end
