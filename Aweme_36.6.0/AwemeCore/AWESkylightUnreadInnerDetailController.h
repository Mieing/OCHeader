@class NSString, UITableViewCell, AWEAwemeModel, NSObject, AWESkylightUserUpdateDataController;
@protocol AWEConcernFollowListUnreadCacheManagerProtocol, AWEAwemeDetailCellMaskProtocol;

@interface AWESkylightUnreadInnerDetailController : NSObject <AWEConcernRecentUpdateUnreadListPageHandlerProtocol, AWEAwemeDetailTableViewControllerDelegate, AWEConcernUpdateDetailViewControllerDelegate>

@property (retain, nonatomic) AWESkylightUserUpdateDataController *dataController;
@property (retain, nonatomic) NSObject<AWEConcernFollowListUnreadCacheManagerProtocol> *manager;
@property (retain, nonatomic) NSString *lastSpecialFollowUnreadUserID;
@property (retain, nonatomic) NSString *lastRecommendUnreadUserID;
@property (nonatomic) BOOL hasShowSpecialFollowLastView;
@property (nonatomic) BOOL hasShowAllUnreadLastView;
@property (retain, nonatomic) UITableViewCell<AWEAwemeDetailCellMaskProtocol> *currentCell;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (retain, nonatomic) NSString *noticeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)detailTableViewController:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2 model:(id)a3;
- (id)currentUnreadUserIDList;
- (BOOL)noMoreUserData;
- (void)loadMoreUnreadUserWithCompletion:(id /* block */)a0;
- (id)userModelWithUserID:(id)a0;
- (BOOL)autoContinuousPlay;
- (void)updateDetailViewController:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2 model:(id)a3;
- (Class)emptyCellClass;
- (void)cacheUnreadItemsIfNeededWithFollowingUser:(id)a0;
- (void)loadMoreSectionDataWithCompletion:(id /* block */)a0;
- (void)showUnreadDetailWithModel:(id)a0;
- (void)findLastSpecialFollowUnreadUserID;
- (void)findLastRecommendUnreadUserID;
- (void)fetchFirstUserData:(id /* block */)a0;
- (void)showAlreadyShowAllUnreadLastView;
- (void)trackReturnHomepageFollowWithIsSpecialFollowUnreadFinish:(BOOL)a0 actionType:(id)a1;
- (void)detailViewControllerWillDisplayCell:(id)a0 model:(id)a1;
- (BOOL)isLastSpecialFollowUnreadItem:(id)a0;
- (BOOL)isLastItem:(id)a0;
- (void)enterUnreadInnerDetailWithNoticeType:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
