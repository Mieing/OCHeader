@class AWEEcomSearchResultFeedLayer, NSString, AWEEcomSearchResultOuterCardLayer, AWEEcomSearchResultSuspensionLayer, AWEEcomSearchResultPageStyle;

@interface AWEEcomSearchResultPageData : MTLModel <AWEEcomSearchResultModelAdapterProtocol, MTLJSONSerializing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEEcomSearchResultFeedLayer *feedLayer;
@property (retain, nonatomic) AWEEcomSearchResultOuterCardLayer *outerCardLayer;
@property (retain, nonatomic) AWEEcomSearchResultSuspensionLayer *suspensionLayer;
@property (retain, nonatomic) AWEEcomSearchResultPageStyle *style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)styleJSONTransformer;
+ (id)feedLayerJSONTransformer;
+ (id)suspensionLayerJSONTransformer;
+ (id)outerCardLayerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)fillMerchandiseResp:(id)a0;
- (void).cxx_destruct;

@end
