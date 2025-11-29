@class NSString, NSDictionary, NSMutableDictionary, NSArray, AWEIMFansGroupGuestStateModel;

@interface AWEIMFansGroupGuestStateViewModel : NSObject

@property (nonatomic) BOOL onLoading;
@property (nonatomic) BOOL canShowContainerView;
@property (nonatomic) BOOL showEmptyPage;
@property (nonatomic) BOOL canShowMyGroupEntry;
@property (nonatomic) BOOL allGroupFull;
@property (nonatomic) BOOL goMasterStateViewHasShown;
@property (copy, nonatomic) NSDictionary *joinGroupFailedCardDict;
@property (copy, nonatomic) NSString *toastContent;
@property (copy, nonatomic) NSString *cidForOpenMessageVC;
@property (copy, nonatomic) NSDictionary *trackJoinGroupDataInfo;
@property (retain, nonatomic) NSMutableDictionary *joinGroupContextDict;
@property (nonatomic) unsigned long long currentSortingType;
@property (retain, nonatomic) NSArray *sortMenuItemModels;
@property (copy, nonatomic) NSArray *recommendedGroupSequence;
@property (nonatomic) long long recommendedGroupShownGroupsCount;
@property (nonatomic) long long shownGroupsCount;
@property (copy, nonatomic) NSArray *plateTypeIndexList;
@property (copy, nonatomic) NSArray *groupViewModelList;
@property (copy, nonatomic) NSArray *groupViewModelListByDefault;
@property (copy, nonatomic) NSArray *groupViewModelListByRecommendedSequence;
@property (retain, nonatomic) AWEIMFansGroupGuestStateModel *model;
@property (readonly, nonatomic) BOOL remindViewHasShown;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *secUid;
@property (nonatomic) BOOL onlyShowJoined;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *sourceType;
@property (nonatomic) BOOL isForbiddenFetchData;
@property (readonly, nonatomic) BOOL shouldShowCreateButtonInEmptyView;
@property (readonly, nonatomic) BOOL enableCreateButtonInEmptyView;
@property (copy, nonatomic) NSDictionary *joinGroupTrackParams;
@property (readonly, copy, nonatomic) NSString *showTypeTrackParam;
@property (readonly, copy, nonatomic) NSString *createBtnNameTrackParam;

- (void)joinGroupWithViewModel:(id)a0 sourceType:(long long)a1 invitationExtra:(id)a2 bizExtra:(id)a3 completion:(id /* block */)a4;
- (long long)plateTypeWithSection:(long long)a0;
- (void)fetchDataWithFirstLoad:(BOOL)a0 result:(id /* block */)a1 completion:(id /* block */)a2;
- (BOOL)hasFoldingData;
- (long long)numberOfSectionsInCollectionView;
- (void)expandFoldingData;
- (void)trackMyFanGroupListShowEvent;
- (void)joinGroupWithViewModel:(id)a0;
- (void)changeToDefaultOrder;
- (void)changeToRecommendedSequenceOrder;
- (void)sendCreateGroupTipsWithCompletion:(id /* block */)a0;
- (id)__generateGroupViewModelListByRecommendedSequenceOrder;
- (void)__setupPlateTypeIndexList;
- (long long)__sourceTypeForEnterFrom;
- (BOOL)__canJumpMessagePageForJoinStatus:(long long)a0;
- (id)generateJoinGroupPanelUrlWithViewModel:(id)a0;
- (void)handleApplyJoinStatusNotification:(id)a0;
- (void)__trackJoinGroupDataWithViewModel:(id)a0 responseStatus:(long long)a1;
- (BOOL)__shouldShowJoinFailCardForStatus:(unsigned long long)a0;
- (BOOL)__shouldAddViewModelForJoinStatus:(unsigned long long)a0;
- (void)trackCreateGroupTipsEvent;
- (long long)numberOfItemsInSection:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
