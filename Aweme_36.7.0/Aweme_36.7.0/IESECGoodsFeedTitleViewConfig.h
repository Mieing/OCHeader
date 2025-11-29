@class UIColor, UIFont, NSNumber;

@interface IESECGoodsFeedTitleViewConfig : NSObject

@property (nonatomic) long long lineBreakMode;
@property (nonatomic) BOOL shouldHiddenArrow;
@property (nonatomic) BOOL shouldHiddenIcon;
@property (nonatomic) double tagImageHeight;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) BOOL enableTwoLines;
@property (retain, nonatomic) NSNumber *lineHeight;

- (void).cxx_destruct;

@end
