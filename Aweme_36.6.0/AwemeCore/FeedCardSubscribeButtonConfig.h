@class NSString;

@interface FeedCardSubscribeButtonConfig : GPBMessage

@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL hasText;
@property (copy, nonatomic) NSString *bgColor;
@property (nonatomic) BOOL hasBgColor;
@property (copy, nonatomic) NSString *color;
@property (nonatomic) BOOL hasColor;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL hasSchema;
@property (copy, nonatomic) NSString *openSchemaConfigId;
@property (nonatomic) BOOL hasOpenSchemaConfigId;
@property (copy, nonatomic) NSString *iconSvg;
@property (nonatomic) BOOL hasIconSvg;
@property (copy, nonatomic) NSString *borderWidth;
@property (nonatomic) BOOL hasBorderWidth;
@property (copy, nonatomic) NSString *borderColor;
@property (nonatomic) BOOL hasBorderColor;

+ (id)descriptor;

@end
