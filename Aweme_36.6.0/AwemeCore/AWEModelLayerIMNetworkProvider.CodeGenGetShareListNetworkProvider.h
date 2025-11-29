@class NSString, NSArray;

@interface AWEModelLayerIMNetworkProvider.CodeGenGetShareListNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ source;
    void /* function */ reqKeys;
    void /* function */ filterKeys;
    void /* function */ baseInfo;
}

@property (nonatomic, copy) NSString *source;
@property (nonatomic, copy) NSArray *reqKeys;
@property (nonatomic, copy) NSArray *filterKeys;
@property (nonatomic, copy) NSString *baseInfo;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (id)initWithSource:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
