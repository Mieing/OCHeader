@class NSArray, NSString;

@interface AWEModelLayerFeedNetworkProvider.CodeGenV1InterestPointListNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ currentPoints;
    void /* function */ timing;
}

@property (nonatomic, copy) NSArray *currentPoints;
@property (nonatomic, copy) NSString *timing;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
