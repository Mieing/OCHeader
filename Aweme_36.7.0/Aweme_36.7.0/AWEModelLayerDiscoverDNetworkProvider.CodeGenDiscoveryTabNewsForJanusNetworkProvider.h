@class NSString, NSNumber, NSArray;

@interface AWEModelLayerDiscoverDNetworkProvider.CodeGenDiscoveryTabNewsForJanusNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ interestCategory;
    void /* function */ forceIdList;
}

@property (nonatomic, copy) NSString *interestCategory;
@property (nonatomic, retain) NSNumber *refreshType;
@property (nonatomic, retain) NSNumber *offset;
@property (nonatomic, retain) NSNumber *lastTimeStamp;
@property (nonatomic, retain) NSNumber *firstTimeStamp;
@property (nonatomic, retain) NSNumber *requireCount;
@property (nonatomic, copy) NSArray *forceIdList;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
