@class NSString, AnchorDetailPageInfoV2;

@interface AnchorActionV2 : GPBMessage

@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL hasSchema;
@property (nonatomic) int schemaType;
@property (nonatomic) BOOL hasSchemaType;
@property (retain, nonatomic) AnchorDetailPageInfoV2 *detailPageInfo;
@property (nonatomic) BOOL hasDetailPageInfo;

+ (id)descriptor;

- (int)schemaType;
- (id)schema;

@end
