@class NSNumber, NSString;

@interface AWEModelLayerFriendsNetworkProvider.CodeGenV1FamiliarListNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* function */ recImprUsers;
}

@property (nonatomic, retain) NSNumber *cursor;
@property (nonatomic, retain) NSNumber *count;
@property (nonatomic, retain) NSNumber *recommendType;
@property (nonatomic, copy) NSString *recImprUsers;
@property (nonatomic, retain) NSNumber *hotsoonFilteredCount;
@property (nonatomic, retain) NSNumber *hotsoonHasMore;
@property (nonatomic, retain) NSNumber *addressBookAccess;
@property (nonatomic, retain) NSNumber *orderBy;
@property (nonatomic, retain) NSNumber *onlyTotal;
@property (nonatomic, retain) NSNumber *needAllFriend;
@property (nonatomic, retain) NSNumber *from;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
