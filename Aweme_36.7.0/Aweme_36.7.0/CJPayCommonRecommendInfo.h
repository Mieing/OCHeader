@class NSString, NSDictionary;

@interface CJPayCommonRecommendInfo : JSONModel <CJPayCommonProtocolModelBuildProtocol>

@property (copy, nonatomic) NSString *recommendType;
@property (copy, nonatomic) NSString *recommendDesc;
@property (copy, nonatomic) NSDictionary *recommendExt;
@property (nonatomic) BOOL choose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

@end
