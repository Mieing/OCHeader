@class NSNumber, NSArray;

@interface AWEModelLayerIMNetworkProvider.CodeGenGenGroupNameAndIconNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ userIds;
}

@property (nonatomic, retain) NSNumber *groupCategory;
@property (nonatomic, copy) NSArray *userIds;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
