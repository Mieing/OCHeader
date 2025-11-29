@class NSString, NSDictionary;

@interface CJPayLynxShowInfo : JSONModel

@property (copy, nonatomic) NSString *url;
@property (nonatomic) BOOL needJump;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDictionary *exts;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
