@class NSString;

@interface AWEModelLayerFriendsNetworkProvider.CodeGenV1MateDeleteNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ userId;
}

@property (nonatomic, copy) NSString *userId;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
