@class NSString;

@interface CustomCoverLabelStructV2 : GPBMessage

@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL hasText;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) BOOL hasTextColor;
@property (copy, nonatomic) NSString *bgColor;
@property (nonatomic) BOOL hasBgColor;

+ (id)descriptor;

@end
