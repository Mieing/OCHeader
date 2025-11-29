@class NSNumber, NSString;

@interface AWEModelLayerStudioNetworkProvider.CodeGenMaterialMGetPreciseUserInfoNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ userIds;
}

@property (nonatomic, retain) NSNumber *appId;
@property (nonatomic, copy) NSString *userIds;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
