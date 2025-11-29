@class NSString, NSArray, NSDictionary;

@interface IESECGoodsDetailLynxModuleModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *_lynxSchemaJSONString;
@property (copy, nonatomic) NSString *_hybridSchemaJSONString;
@property (copy, nonatomic) NSArray *orderList;
@property (copy, nonatomic) NSDictionary *lynxSchemaDict;
@property (copy, nonatomic) NSDictionary *hybridSchemaDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
