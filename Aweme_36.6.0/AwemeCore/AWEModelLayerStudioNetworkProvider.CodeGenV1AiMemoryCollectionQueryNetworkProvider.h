@class NSNumber, NSString;

@interface AWEModelLayerStudioNetworkProvider.CodeGenV1AiMemoryCollectionQueryNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ followtopicname;
    void /* function */ followtopicid;
}

@property (nonatomic, retain) NSNumber *scene;
@property (nonatomic, retain) NSNumber *searchtype;
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
