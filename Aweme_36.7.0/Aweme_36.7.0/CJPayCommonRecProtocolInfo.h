@class NSString;

@interface CJPayCommonRecProtocolInfo : JSONModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *group;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;
+ (id)toObjArray:(id)a0;

- (void).cxx_destruct;

@end
