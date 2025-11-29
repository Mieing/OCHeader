@class NSString, NSNumber;

@interface AWEModelLayerFeedNetworkProvider.CodeGenV2PlayControlClaSubtitlesNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ awemeId;
}

@property (nonatomic, copy) NSString *awemeId;
@property (nonatomic, retain) NSNumber *targetLanguageId;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
