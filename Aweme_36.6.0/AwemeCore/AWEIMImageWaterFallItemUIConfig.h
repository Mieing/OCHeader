@class UIColor, NSArray, UIFont;

@interface AWEIMImageWaterFallItemUIConfig : NSObject

@property (retain, nonatomic) UIColor *backgroudColor;
@property (nonatomic) double mainImageHeight;
@property (nonatomic) double mainImageCornerRadius;
@property (nonatomic) double dottedLineWidth;
@property (retain, nonatomic) NSArray *dashPattern;
@property (retain, nonatomic) UIColor *dottedLineColor;
@property (nonatomic) double iconImageHeight;
@property (nonatomic) double iconImageCornerRadius;
@property (nonatomic) long long iconPosition;
@property (nonatomic) double textHeight;
@property (nonatomic) long long textPosition;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) BOOL buttonEnabled;
@property (retain, nonatomic) UIColor *buttonBackgroudColor;
@property (retain, nonatomic) UIColor *buttonTextColor;
@property (retain, nonatomic) UIFont *buttonTextFont;

- (void).cxx_destruct;

@end
