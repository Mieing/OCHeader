@class NSString, AWEEcommerceSearchMerchandiseCardFrameModel;

@interface AWEEcomSearchResultCardConfig : MTLModel <AWEEcomSearchResultModelAdapterProtocol, MTLJSONSerializing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEEcommerceSearchMerchandiseCardFrameModel *goodsCardFrameStruct;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)goodsCardFrameStructJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)fillMerchandiseResp:(id)a0;
- (void).cxx_destruct;

@end
