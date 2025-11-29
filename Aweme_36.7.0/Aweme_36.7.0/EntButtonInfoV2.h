@class NSString;

@interface EntButtonInfoV2 : GPBMessage

@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL hasText;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL hasSchema;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) BOOL hasTextColor;

+ (id)descriptor;

@end
