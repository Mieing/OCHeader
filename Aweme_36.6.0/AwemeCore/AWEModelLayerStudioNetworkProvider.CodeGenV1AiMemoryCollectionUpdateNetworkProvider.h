@class NSNumber, NSArray;

@interface AWEModelLayerStudioNetworkProvider.CodeGenV1AiMemoryCollectionUpdateNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ memorycollections;
}

@property (nonatomic, retain) NSNumber *updatetype;
@property (nonatomic, copy) NSArray *memorycollections;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
