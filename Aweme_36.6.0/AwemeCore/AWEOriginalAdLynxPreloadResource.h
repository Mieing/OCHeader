@class NSArray, NSString, AWEURLModel;

@interface AWEOriginalAdLynxPreloadResource : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *alphaVideoUrl;
@property (retain, nonatomic) NSArray *alphaVideoUrls;
@property (retain, nonatomic) NSArray *preloadResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)alphaVideoUrlsJSONTransformer;
+ (id)preloadResourceJSONTransformer;

- (void).cxx_destruct;

@end
