@class NSNumber, NSString;

@interface AWEModelLayerFriendsNetworkProvider.CodeGenV1FamiliarVideoVisitorListNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ insertUids;
    void /* function */ cachedVisitors;
}

@property (nonatomic, retain) NSNumber *awemeId;
@property (nonatomic, retain) NSNumber *count;
@property (nonatomic, retain) NSNumber *addressBookAccess;
@property (nonatomic, retain) NSNumber *maxCursor;
@property (nonatomic, retain) NSNumber *minCursor;
@property (nonatomic, copy) NSString *insertUids;
@property (nonatomic, retain) NSNumber *scene;
@property (nonatomic, retain) NSNumber *clientVisitorCnt;
@property (nonatomic, retain) NSNumber *playCount;
@property (nonatomic, retain) NSNumber *priorityFollower;
@property (nonatomic, copy) NSString *cachedVisitors;
@property (nonatomic, retain) NSNumber *needColdStartCount;
@property (nonatomic, retain) NSNumber *ignoreCommonAgreement;
@property (nonatomic, retain) NSNumber *cfItemType;
@property (nonatomic, retain) NSNumber *needFavorite;
@property (nonatomic, retain) NSNumber *favoriteTime;
@property (nonatomic, retain) NSNumber *recShowListResult;
@property (nonatomic, retain) NSNumber *afterSettingsChange;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
