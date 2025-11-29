@class NSArray, UICollectionView, NSString, UICollectionViewFlowLayout, NSMutableArray;
@protocol AWEIMRecommendInvitationUserDetailViewDelegate;

@interface AWEIMRecommendInvitationUserDetailView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (readonly, nonatomic) UICollectionViewFlowLayout *layout;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly, copy, nonatomic) NSArray *userIDs;
@property (readonly, nonatomic) NSMutableArray *selectedUserIDs;
@property (weak, nonatomic) id<AWEIMRecommendInvitationUserDetailViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__createComponents;
- (void)__layoutComponents;
- (void)configWithMessage:(id)a0;
- (id)invitationUserIDs;
- (id)allRecommendUserIDs;
- (void)configWithUserIDs:(id)a0 selectedUserIDs:(id)a1;
- (void)__configComponentsWithMessage:(id)a0;
- (id)__userVMWithID:(id)a0 secUserID:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;

@end
