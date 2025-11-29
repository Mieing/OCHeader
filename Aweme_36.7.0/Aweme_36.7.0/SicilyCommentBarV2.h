@class NSString;

@interface SicilyCommentBarV2 : GPBMessage

@property (copy, nonatomic) NSString *prefix;
@property (nonatomic) BOOL hasPrefix;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL hasDesc;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL hasSchema;

+ (id)descriptor;

@end
