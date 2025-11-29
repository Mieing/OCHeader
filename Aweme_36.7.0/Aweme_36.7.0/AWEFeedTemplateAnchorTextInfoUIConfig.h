@class UIColor, UIFont, NSString;

@interface AWEFeedTemplateAnchorTextInfoUIConfig : NSObject

@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *fontColor;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (copy, nonatomic) NSString *defaultSeparator;
@property (retain, nonatomic) UIFont *separatorFont;
@property (retain, nonatomic) UIColor *separatorFontColor;
@property (nonatomic) double leftMarginForMainLabel;
@property (nonatomic) double leftMarginForIcon;
@property (nonatomic) double leftMarginForExtendedLabel;

+ (id)defaultConfigForSuffix;

- (void).cxx_destruct;

@end
