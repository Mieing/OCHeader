@class NSString, AWEEcommerceSearchBoxBannerContentModel, AWEEcommerceSearchBoxBannerSceneInfo;

@interface AWEEcommerceSearchBoxBannerModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long bannerContentType;
@property (retain, nonatomic) AWEEcommerceSearchBoxBannerContentModel *imgContent;
@property (retain, nonatomic) AWEEcommerceSearchBoxBannerContentModel *imgTextContent;
@property (retain, nonatomic) AWEEcommerceSearchBoxBannerSceneInfo *sceneInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imgContentJSONTransformer;
+ (id)imgTextContentJSONTransformer;
+ (id)sceneInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)schema;
- (void).cxx_destruct;

@end
