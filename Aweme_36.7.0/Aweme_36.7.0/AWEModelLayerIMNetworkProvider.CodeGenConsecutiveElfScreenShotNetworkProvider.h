@class NSString, NSArray, _TtC30AWEModelLayerIMNetworkProvider29CodeGenIMUserbaseinfoReqModel, NSNumber;

@interface AWEModelLayerIMNetworkProvider.CodeGenConsecutiveElfScreenShotNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ lightPetElfUri;
    void /* function */ grayPetElfUri;
    void /* function */ lightUriSkey;
    void /* function */ grayUriSkey;
    void /* function */ version;
    void /* function */ scene;
    void /* function */ urls;
}

@property (nonatomic, retain) NSNumber *convShortId;
@property (nonatomic, copy) NSString *lightPetElfUri;
@property (nonatomic, copy) NSString *grayPetElfUri;
@property (nonatomic, copy) NSString *lightUriSkey;
@property (nonatomic, copy) NSString *grayUriSkey;
@property (nonatomic, retain) NSNumber *petElfId;
@property (nonatomic, copy) NSString *version;
@property (nonatomic, retain) _TtC30AWEModelLayerIMNetworkProvider29CodeGenIMUserbaseinfoReqModel *baseInfo;
@property (nonatomic, copy) NSString *scene;
@property (nonatomic, copy) NSArray *urls;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
