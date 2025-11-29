@class NSArray, NSNumber;

@interface AWEModelLayerStudioNetworkProvider.CodeGenV1AiDeleteNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ taskInfo;
}

@property (nonatomic, copy) NSArray *taskInfo;
@property (nonatomic, retain) NSNumber *deleteSource;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)initWithDeleteSource:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
