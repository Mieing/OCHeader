@class NSArray, NSNumber;

@interface AWEModelLayerFeedNetworkProvider.CodeGenV2PlayControlClaBatchSubtitlesNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ awemeIds;
}

@property (nonatomic, copy) NSArray *awemeIds;
@property (nonatomic, retain) NSNumber *targetLanguageId;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
