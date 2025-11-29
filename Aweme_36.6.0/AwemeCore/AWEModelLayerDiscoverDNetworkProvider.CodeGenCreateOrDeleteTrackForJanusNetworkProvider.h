@class NSString, NSNumber;

@interface AWEModelLayerDiscoverDNetworkProvider.CodeGenCreateOrDeleteTrackForJanusNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ trackWord;
    void /* function */ desrcibe;
}

@property (nonatomic, copy) NSString *trackWord;
@property (nonatomic, copy) NSString *desrcibe;
@property (nonatomic, retain) NSNumber *trackId;
@property (nonatomic, retain) NSNumber *operation;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
