@class UIColor, UIFont, NSArray, IESLivePublicScreenCommonMessageParser, NSAttributedString;

@interface IESLivePublicScreenDisplayTextParseConfig : NSObject

@property (nonatomic) double fontSize;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) IESLivePublicScreenCommonMessageParser *messageParser;
@property (nonatomic) double localPatternFontSize;
@property (nonatomic) BOOL shouldFilterIcon;
@property (copy, nonatomic) NSArray *filterBadgeUserIDs;
@property (retain, nonatomic) UIColor *localUserTextColor;
@property (retain, nonatomic) UIColor *localContentColor;
@property (retain, nonatomic) UIColor *localGiftTextColor;
@property (retain, nonatomic) UIColor *localPatternTextColor;
@property (nonatomic) double imageScalingRateWithFont;
@property (nonatomic) double imageMaxHeight;
@property (copy, nonatomic) NSAttributedString *imagePlaceHolderContent;
@property (nonatomic) double emojiScalingRateWithFont;
@property (nonatomic) BOOL imageScalingRateWithFontDisabled;

+ (id)defaultConfig;

- (id)copy;
- (void).cxx_destruct;

@end
