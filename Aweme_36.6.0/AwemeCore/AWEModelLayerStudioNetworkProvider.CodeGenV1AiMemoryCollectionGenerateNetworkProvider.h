@class NSNumber, NSArray, NSString;

@interface AWEModelLayerStudioNetworkProvider.CodeGenV1AiMemoryCollectionGenerateNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ assetids;
    void /* function */ followtopicname;
    void /* function */ followtopicid;
}

@property (nonatomic, retain) NSNumber *scene;
@property (nonatomic, copy) NSArray *assetids;
@property (nonatomic, copy) NSString *followtopicname;
@property (nonatomic, copy) NSString *followtopicid;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
