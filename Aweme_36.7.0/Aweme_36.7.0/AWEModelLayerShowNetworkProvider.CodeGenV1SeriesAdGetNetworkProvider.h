@class NSString;

@interface AWEModelLayerShowNetworkProvider.CodeGenV1SeriesAdGetNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ seriesId;
    void /* function */ scene;
    void /* function */ seriesExtraParams;
}

@property (nonatomic, copy) NSString *seriesId;
@property (nonatomic, copy) NSString *scene;
@property (nonatomic, copy) NSString *seriesExtraParams;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
