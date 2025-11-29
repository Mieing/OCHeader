@class NSDictionary, NSString;

@interface IESIMModelLayerNetworkProvider.CodeGenShareMixPhotoNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ shareInfo;
    void /* function */ idempotentId;
    void /* function */ track;
}

@property (nonatomic, copy) NSDictionary *shareInfo;
@property (nonatomic, copy) NSString *idempotentId;
@property (nonatomic, copy) NSDictionary *track;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
