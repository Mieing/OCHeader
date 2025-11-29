@class NSString;

@interface SeriesCommentTopBarV2 : GPBMessage

@property (copy, nonatomic) NSString *preTitle;
@property (nonatomic) BOOL hasPreTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) BOOL hasSubTitle;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL hasSchema;

+ (id)descriptor;

@end
