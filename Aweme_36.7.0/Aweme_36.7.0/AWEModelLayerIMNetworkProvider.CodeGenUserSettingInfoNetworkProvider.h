@class NSString, NSArray;

@interface AWEModelLayerIMNetworkProvider.CodeGenUserSettingInfoNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ secUid;
    void /* function */ keyList;
}

@property (nonatomic, copy) NSString *secUid;
@property (nonatomic, copy) NSArray *keyList;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
