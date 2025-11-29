@class NSString;

@interface AWENetworkProviderLayer.V1UserMusicCollectNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* unknown type, empty encoding */ cursor;
    void /* unknown type, empty encoding */ count;
    void /* function */ scene;
    void /* function */ userId;
    void /* function */ secUserId;
    void /* unknown type, empty encoding */ collectScene;
}

@property (nonatomic, copy) NSString *scene;
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *secUserId;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
