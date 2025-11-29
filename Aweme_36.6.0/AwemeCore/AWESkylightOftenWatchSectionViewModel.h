@class AWERelationListCellBaseViewModel, NSArray, NSString;

@interface AWESkylightOftenWatchSectionViewModel : AWECommonUserListBaseSectionViewModel <AWEUserMessage, AWEConcernFollowListUnreadCacheMessage>

@property (nonatomic) long long totalUnreadItems;
@property (retain, nonatomic) AWERelationListCellBaseViewModel *showUnreadDetailModel;
@property (retain, nonatomic) NSArray *oftenWatchList;
@property (readonly, nonatomic) BOOL isSpecialFollowMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)setupViewModel;
- (id)enterFrom;
- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void)syncModelFollowStatus:(id)a0 status:(long long)a1;
- (void)followListUnreadCacheDidChangeWithUserID:(id)a0 deleteItemIDs:(id)a1;
- (void)followListUnreadCacheDidReplaceWithUserID:(id)a0;
- (id)convertUserModel:(id)a0;
- (void)cacheUnreadItemsIfNeededWithFollowingUser:(id)a0;
- (unsigned long long)getEnterFrom;
- (void)removeRecommendSpecialFollowUser:(id)a0;
- (void)addSpecialFollowWithModel:(id)a0;
- (void)showUnreadDetailWithModel:(id)a0;
- (id)removeWithUserID:(id)a0;
- (id)initWithIsSpecialFollowMode:(BOOL)a0;
- (void)addWithUser:(id)a0;
- (void).cxx_destruct;
- (long long)type;
- (void)dealloc;
- (id)previousPage;

@end
