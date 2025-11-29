@class NSString;

@interface AWEModelLayerStudioNetworkProvider.CodeGenV1AnchorRecommendAnchorNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ zipUri;
    void /* function */ enableLocationAuth;
    void /* function */ text;
    void /* function */ title;
}

@property (nonatomic, copy) NSString *zipUri;
@property (nonatomic, copy) NSString *enableLocationAuth;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *title;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
