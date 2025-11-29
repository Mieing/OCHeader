@class NSString;

@interface AWEModelLayerPlayInteractionNetworkProvider.CodeGenLongPressPanelNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ scene;
    void /* function */ dataHash;
}

@property (nonatomic, copy) NSString *scene;
@property (nonatomic, copy) NSString *dataHash;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
