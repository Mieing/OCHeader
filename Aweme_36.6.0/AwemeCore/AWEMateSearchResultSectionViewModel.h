@class NSString, NSArray, AWESocialRelationObserver, AWEMateListDataController, NSObject;
@protocol AWEContactLocalSearchManagerProtocol;

@interface AWEMateSearchResultSectionViewModel : AWEBaseListSectionViewModel <AWEUserMessage>

@property (copy, nonatomic) NSString *searchText;
@property (copy, nonatomic) NSArray *mateList;
@property (retain, nonatomic) NSArray *mateUIDs;
@property (retain, nonatomic) AWEMateListDataController *dataController;
@property (retain, nonatomic) NSObject<AWEContactLocalSearchManagerProtocol> *searchManager;
@property (retain, nonatomic) AWESocialRelationObserver *mateObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishHideMyPostFromUser:(id)a0 status:(long long)a1;
- (void)didFinishShowMyPostToUser:(id)a0 status:(long long)a1;
- (void)didFinishHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishUnHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishCloseFriendsWithUser:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)setupViewModel;
- (void)didChangePrivateRelationWithUser:(id)a0 relationType:(long long)a1 relationValue:(long long)a2;
- (void)fetchSectionData;
- (void)enterUserProfile:(long long)a0;
- (long long)indexInSearchResultUsersForUserID:(id)a0;
- (void)removeSearchResultUsersAtIndex:(long long)a0;
- (void)updateMateList:(id)a0 dataController:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
