@class NSNumber;

@interface AWEModelLayerFriendsNetworkProvider.CodeGenV1UserBlockStoryListNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider

@property (nonatomic, retain) NSNumber *type;
@property (nonatomic, retain) NSNumber *cursor;
@property (nonatomic, retain) NSNumber *count;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
