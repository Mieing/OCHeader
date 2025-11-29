@class NSDictionary, NSString, IESECGoodsDetailNavigationMoreMetaModel;

@interface IESECGoodsDetailNavigationMetaModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSDictionary *collectParams;
@property (retain, nonatomic) NSDictionary *shareParams;
@property (copy, nonatomic) NSDictionary *reportParams;
@property (retain, nonatomic) IESECGoodsDetailNavigationMoreMetaModel *moreParams;
@property (retain, nonatomic) NSDictionary *consult;
@property (retain, nonatomic) NSDictionary *mallParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
