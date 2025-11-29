@class NSArray, NSString, NSObject;
@protocol AFDFamiliarSearchDataControllerProtocol, AFDFamiliarFriendsDataProviderProtocol;

@interface AFDCloseFriendsSettingsPanelListSectionDataController : NSObject

@property (retain, nonatomic) NSObject<AFDFamiliarSearchDataControllerProtocol> *friendsDataController;
@property (retain, nonatomic) NSObject<AFDFamiliarFriendsDataProviderProtocol> *friendsDataProvider;
@property (nonatomic) BOOL fetchFriendsOnAir;
@property (copy, nonatomic) NSArray *friendsList;
@property (nonatomic) BOOL fetchMateOnAir;
@property (nonatomic) unsigned long long friendsListSceneStyle;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSString *insertUID;

- (BOOL)isRequestOnAir;
- (BOOL)replaceFriendListData;
- (BOOL)p_useMateListDataSource;
- (void).cxx_destruct;
- (id)init;
- (void)fetchWithCompletion:(id /* block */)a0;

@end
