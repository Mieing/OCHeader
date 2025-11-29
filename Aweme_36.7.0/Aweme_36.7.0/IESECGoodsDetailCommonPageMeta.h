@class NSString, NSDictionary, IESECGoodsDetailCommonMeta, IESECGoodsDetailSkuMeta;

@interface IESECGoodsDetailCommonPageMeta : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECGoodsDetailCommonMeta *commonMeta;
@property (retain, nonatomic) NSDictionary *shareMeta;
@property (retain, nonatomic) NSDictionary *trackMeta;
@property (retain, nonatomic) NSDictionary *serverMonitorMeta;
@property (retain, nonatomic) IESECGoodsDetailSkuMeta *skuMeta;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
