@class NSArray, AWEAdTransitionEggInfo, NSDictionary, NSString;

@interface AWEAdFeedPreloadDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *channelNames;
@property (copy, nonatomic) NSArray *channelNamesNewAks;
@property (copy, nonatomic) NSArray *awemeChannelNames;
@property (retain, nonatomic) AWEAdTransitionEggInfo *transitionEggInfo;
@property (copy, nonatomic) NSArray *transitionEggs;
@property (copy, nonatomic) NSArray *alphaVideoResources;
@property (nonatomic) BOOL alphaVideoRealFullscreen;
@property (copy, nonatomic) NSDictionary *videoModelMap;
@property (copy, nonatomic) NSArray *preloadWebpResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)transitionEggsJSONTransformer;
+ (id)alphaVideoResourcesJSONTransformer;

- (void).cxx_destruct;

@end
