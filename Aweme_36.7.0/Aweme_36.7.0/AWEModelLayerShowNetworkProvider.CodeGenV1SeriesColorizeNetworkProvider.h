@class NSString, NSArray;

@interface AWEModelLayerShowNetworkProvider.CodeGenV1SeriesColorizeNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ event;
    void /* function */ seriesColorCollections;
}

@property (nonatomic, copy) NSString *event;
@property (nonatomic, copy) NSArray *seriesColorCollections;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
