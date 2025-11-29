@class AWEEcomAISearchResultSuspensionLayer, AWEEcomAISearchResultPageStyle, NSString, AWEEcomAISearchResultFeedLayer;

@interface AWEEcomAISearchResultPageData : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEEcomAISearchResultFeedLayer *feedLayer;
@property (retain, nonatomic) AWEEcomAISearchResultSuspensionLayer *suspensionLayer;
@property (retain, nonatomic) AWEEcomAISearchResultPageStyle *style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)styleJSONTransformer;
+ (id)feedLayerJSONTransformer;
+ (id)suspensionLayerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
