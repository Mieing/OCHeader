@class AWERelationListCellBaseViewModel, NSArray, NSString;

@interface AWESkylightMoreAuthorSectionViewModel : AWECommonUserListBaseSectionViewModel <AWEUserMessage, AWEConcernFollowListUnreadCacheMessage>

@property (retain, nonatomic) AWERelationListCellBaseViewModel *showUnreadDetailModel;
@property (copy, nonatomic) id /* block */ moreAuthorLoadMoreInInnerStreamComplitionBlock;
@property (nonatomic) BOOL needLoadMoreInInnerStream;
@property (retain, nonatomic) NSArray *moreAuthorList;
@property (retain, nonatomic) NSArray *loadMoreList;
@property (retain, nonatomic) AWERelationListCellBaseViewModel *removeAdapterUser;
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
- (unsigned long long)getEnterFrom;
- (void)syncModelFollowStatus:(id)a0 status:(long long)a1;
- (void)followListUnreadCacheDidChangeWithUserID:(id)a0 deleteItemIDs:(id)a1;
- (void)followListUnreadCacheDidReplaceWithUserID:(id)a0;
- (id)convertUserModel:(id)a0;
- (void)cacheUnreadItemsIfNeededWithFollowingUser:(id)a0;
- (void)removeRecommendSpecialFollowUser:(id)a0;
- (void)addSpecialFollowWithModel:(id)a0;
- (void)showUnreadDetailWithModel:(id)a0;
- (BOOL)canShowSpecialFollowActionWithStatus:(long long)a0;
- (id)removeWithUserID:(id)a0;
- (id)initWithIsSpecialFollowMode:(BOOL)a0;
- (void)addWithUser:(id)a0;
- (void).cxx_destruct;
- (long long)type;
- (void)dealloc;
- (id)previousPage;

@end
