@class AWEMixVideoCollectionListContext, NSString, AWEMixVideoCollectionListDataController, AWEMixVideoCollectionListViewController;

@interface AWEMixVideoCollectionListViewModel : NSObject

@property (retain, nonatomic) AWEMixVideoCollectionListContext *context;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEMixVideoCollectionListDataController *dataController;
@property (weak, nonatomic) AWEMixVideoCollectionListViewController *viewController;

- (void)loadMoreListDataWithCompletion:(id /* block */)a0;
- (void)refreshListDataWithCompletion:(id /* block */)a0;
- (id)getIndexPathForUserID:(id)a0;
- (id)mixCollectedUserModelForIndexPath:(id)a0;
- (void)handleFollowButtonTapped:(id)a0;
- (void)handleAuthorTapped:(id)a0;
- (id)userModelWithIndexPath:(id)a0;
- (void)executeUnfollowWithUserModel:(id)a0 indexPath:(id)a1;
- (void)executeFollowWithUserModel:(id)a0 indexPath:(id)a1;
- (id)getRelationContextWithUserModel:(id)a0;
- (void)updateFollowStatusWithUserModel:(id)a0 indexPath:(id)a1;
- (void)trackFollowWithEvent:(id)a0 userModel:(id)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (long long)numberOfSections;
- (long long)numberOfRowsInSection:(long long)a0;
- (double)cellHeightForIndexPath:(id)a0;

@end
