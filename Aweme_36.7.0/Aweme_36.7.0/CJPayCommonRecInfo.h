@class NSString, CJPayCommonRecInfoExt;

@interface CJPayCommonRecInfo : JSONModel

@property (copy, nonatomic) NSString *recommendType;
@property (copy, nonatomic) NSString *recommendDesc;
@property (retain, nonatomic) CJPayCommonRecInfoExt *recommendExt;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
