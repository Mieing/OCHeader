@class NSArray, NSNumber;

@interface AWEModelLayerShowNetworkProvider.CodeGenV1SeriesAwemeFeedNewNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ awemeIds;
}

@property (nonatomic, copy) NSArray *awemeIds;
@property (nonatomic, retain) NSNumber *offset;
@property (nonatomic, retain) NSNumber *count;
@property (nonatomic, retain) NSNumber *enterSource;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
