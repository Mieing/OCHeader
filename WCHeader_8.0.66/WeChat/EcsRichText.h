@class NSString;

@interface EcsRichText : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *textColor;
@property (retain, nonatomic) NSString *textColorDarkmode;
@property (nonatomic) unsigned int fontSize;
@property (nonatomic) unsigned int fontWeight;
@property (nonatomic) unsigned int fontName;
@property (nonatomic) unsigned int additionalStyle;

+ (void)initialize;

@end
