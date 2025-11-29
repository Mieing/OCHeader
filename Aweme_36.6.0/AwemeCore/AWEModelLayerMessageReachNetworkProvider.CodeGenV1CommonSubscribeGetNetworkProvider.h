@class NSString;

@interface AWEModelLayerMessageReachNetworkProvider.CodeGenV1CommonSubscribeGetNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ serviceAccountId;
}

@property (nonatomic, copy) NSString *serviceAccountId;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
