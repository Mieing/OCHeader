@class NSString;

@interface MainContentStructV2 : GPBMessage

@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL hasText;
@property (nonatomic) int fontSize;
@property (nonatomic) BOOL hasFontSize;
@property (copy, nonatomic) NSString *fontColor;
@property (nonatomic) BOOL hasFontColor;
@property (nonatomic) int bold;
@property (nonatomic) BOOL hasBold;
@property (nonatomic) int truncate;
@property (nonatomic) BOOL hasTruncate;
@property (nonatomic) int ellipsis;
@property (nonatomic) BOOL hasEllipsis;
@property (nonatomic) int fontFamily;
@property (nonatomic) BOOL hasFontFamily;
@property (copy, nonatomic) NSString *fontName;
@property (nonatomic) BOOL hasFontName;

+ (id)descriptor;

@end
