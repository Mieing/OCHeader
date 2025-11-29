@class NSString;

@interface AnchorTextStyleV2 : GPBMessage

@property (nonatomic) int maxLen;
@property (nonatomic) BOOL hasMaxLen;
@property (nonatomic) int fontSize;
@property (nonatomic) BOOL hasFontSize;
@property (copy, nonatomic) NSString *fontColor;
@property (nonatomic) BOOL hasFontColor;
@property (nonatomic) int bold;
@property (nonatomic) BOOL hasBold;
@property (nonatomic) int ellipsis;
@property (nonatomic) BOOL hasEllipsis;

+ (id)descriptor;

- (int)fontSize;
- (int)maxLen;

@end
