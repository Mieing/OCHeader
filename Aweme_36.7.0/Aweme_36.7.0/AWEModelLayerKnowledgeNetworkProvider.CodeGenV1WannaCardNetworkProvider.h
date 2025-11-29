@class NSNumber, NSString;

@interface AWEModelLayerKnowledgeNetworkProvider.CodeGenV1WannaCardNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ connectStrategy;
}

@property (nonatomic, retain) NSNumber *firstRefresh;
@property (nonatomic, copy) NSString *connectStrategy;
@property (nonatomic, retain) NSNumber *wannaCardType;
@property (nonatomic, retain) NSNumber *isClientCondition;
@property (nonatomic, retain) NSNumber *pullType;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
