@class NSString, RTEGeneratedAttributeInfo;

@interface RTEGeneratedAttributesWrap : WXPBGeneratedMessage

@property (nonatomic) unsigned long long length;
@property (nonatomic) BOOL isBold;
@property (nonatomic) float italicObliqueness;
@property (nonatomic) BOOL isUnderLine;
@property (nonatomic) unsigned int fontSize;
@property (retain, nonatomic) NSString *fontColor;
@property (nonatomic) BOOL isHighlight;
@property (retain, nonatomic) RTEGeneratedAttributeInfo *attirbuteInfo;

+ (void)initialize;

@end
