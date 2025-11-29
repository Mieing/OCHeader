@class NSArray, NSString;

@interface IESECGoodsDetailPreLoadElement : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *lynxCardList;
@property (retain, nonatomic) NSArray *nativeList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lynxCardListJSONTransformer;
+ (id)nativeListJSONTransformer;
+ (id)getPreLoadElementWithDict:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
