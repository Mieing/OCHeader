@class NSString;

@interface AWEModelLayerShowNetworkProvider.CodeGenpaidSendAdLogNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ adLogInfo;
    void /* function */ sendUniqueId;
}

@property (nonatomic, copy) NSString *adLogInfo;
@property (nonatomic, copy) NSString *sendUniqueId;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
