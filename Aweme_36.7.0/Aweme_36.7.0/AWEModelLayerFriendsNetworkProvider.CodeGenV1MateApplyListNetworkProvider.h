@class NSNumber;

@interface AWEModelLayerFriendsNetworkProvider.CodeGenV1MateApplyListNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider

@property (nonatomic, retain) NSNumber *isRefresh;
@property (nonatomic, retain) NSNumber *maxTimestamp;
@property (nonatomic, retain) NSNumber *minTimestamp;
@property (nonatomic, retain) NSNumber *count;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
