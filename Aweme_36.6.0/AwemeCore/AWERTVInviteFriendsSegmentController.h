@class NSMutableOrderedSet, NSString, NSArray, RxPromise, NSMutableDictionary, NSDictionary, NSMutableArray, RxScheduler, RTVInviteFriendsDataProviderContext, RxDeferred;
@protocol RxInjector, IESIMSearchEngineProtocol, RTVXRStateRecorder, RTVVoipConfigureManagerInterface, RTVCollectionViewControllerSegmentControllerDelegate, RTVSettingsManager, RTVUserProfileManagerInterface, RTVInviteParticipantDataFetcher, AWERTVInviteFriendsSegmentControllerDelegate;

@interface AWERTVInviteFriendsSegmentController : NSObject <RTVCollectionViewControllerSegmentController>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (retain, nonatomic) RxDeferred *searchCompleteDefer;
@property (readonly, nonatomic) RxPromise *fetchAllFriendsPromise;
@property (readonly, nonatomic) RxPromise *fetchAllGroupsPromise;
@property (readonly, nonatomic) RxScheduler *writeScheduler;
@property (readonly, nonatomic) id<IESIMSearchEngineProtocol> searchEngine;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) id<RTVXRStateRecorder> xrStateRecorder;
@property (retain, nonatomic) NSDictionary *userActiveInfoMap;
@property (retain) NSMutableDictionary *currentUserCellModelMapper;
@property (retain, nonatomic) RTVInviteFriendsDataProviderContext *context;
@property (retain, nonatomic) id<RTVInviteParticipantDataFetcher> dataFetcher;
@property (readonly, nonatomic) NSArray *selectedItemIDs;
@property (readonly, nonatomic) NSMutableArray *selectedResults;
@property (readonly, nonatomic) NSMutableOrderedSet *searchSelectedUserIDs;
@property (retain, nonatomic) NSMutableArray *defaultSelectUserIDs;
@property (nonatomic) BOOL hasChangeSelect;
@property (retain, nonatomic) RxPromise *searchEngineReadyPromise;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> voipConfiguration;
@property (readonly, weak, nonatomic) id<RTVSettingsManager> rtvSettingsManager;
@property (weak, nonatomic) id<AWERTVInviteFriendsSegmentControllerDelegate> delegate;
@property (weak, nonatomic) id<RTVCollectionViewControllerSegmentControllerDelegate> segmentDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)registReusableViewForCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })itemSizeForCollectionView:(id)a0 withCellModel:(id)a1;
- (BOOL)__interfaceOrientationLayoutIsPortrait;
- (id)__fetchAllFriends;
- (id)__fetchAllGroups;
- (void)__configSearchEngine;
- (id)__cellModelsWithItems:(id)a0;
- (id)__sectionIdentifierWithCategory:(long long)a0;
- (id)__fetchAllFriendsSectionModels;
- (id)__inviteFriendsCellReuseIdentifier;
- (id)__inviteGroupCellReuseIdentifier;
- (id)__inviteFriendHeaderReuseIdentifier;
- (BOOL)__canSelectCellModel:(id)a0;
- (void)__changeFriendSelectState:(id)a0;
- (id)__sectionModelsWithItems:(id)a0 category:(long long)a1;
- (unsigned long long)__recentMaxUserCount;
- (id)__sortUsersByNameIndex:(id)a0;
- (id)__createCellModelWithItem:(id)a0;
- (unsigned long long)__currentSelectCount;
- (BOOL)__canSelectItem:(id)a0;
- (id)searchResultWithKey:(id)a0;
- (struct CGSize { double x0; double x1; })supplementarySizeForCollectionView:(id)a0 elementsKind:(id)a1 sectionIdentifier:(id)a2;
- (void)collectionView:(id)a0 didSelectCellModel:(id)a1;
- (id)currentSelectedResults;
- (id)defaultSelectedIDs;
- (id)__preferSelectedSort:(id)a0;
- (BOOL)isSearching;
- (void).cxx_destruct;
- (void)resetSelection;
- (id)sectionModels;

@end
