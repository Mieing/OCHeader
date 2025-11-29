@class NSArray;

@interface CJPayAssetCardStyleShowInfo : JSONModel

@property (copy, nonatomic) NSArray *cardStyleIndexList;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
