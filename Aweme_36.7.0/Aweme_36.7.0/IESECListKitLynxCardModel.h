@class NSString, NSDictionary;

@interface IESECListKitLynxCardModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *lynxSchema;
@property (copy, nonatomic) NSDictionary *lynxData;
@property (copy, nonatomic) NSDictionary *extraData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lynxDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)extraDataJSONTransformer;

- (void).cxx_destruct;

@end
