@class AWEPostWorkStatusModel;
@protocol AWEPostWorkViewControllerDelegate;

@interface AWEPostWorkStatusController : AWEUserWorkController

@property (retain, nonatomic) AWEPostWorkStatusModel *statusModel;
@property (weak, nonatomic) id<AWEPostWorkViewControllerDelegate> delegate;

- (struct CGSize { double x0; double x1; })referenceSizeForHeaderInSection:(long long)a0;
- (BOOL)allowTaskCardPublish;
- (BOOL)shouldShowEmptyPublishTaskCard;
- (id)emptyPublishGuideModel;
- (BOOL)shouldShowTaskCard;
- (id)verticalTaskCardModel;
- (double)screenBottomHeight;
- (BOOL)isPostListEmpty;
- (BOOL)shouldShowSocialPublishGuide;
- (id)socialPublishGuide;
- (double)postScreenWidth;
- (BOOL)enableEmptyPublishGuideNewStrategy;
- (BOOL)shouldUseStatusSection;
- (void)updateStatusType;
- (void)registCollectionCellClass:(id)a0;
- (BOOL)shouldShowPublishGuide;
- (unsigned long long)numberOfItems;
- (long long)statusType;
- (void).cxx_destruct;
- (id)cellForItemAtIndexPath:(id)a0;
- (id)user;
- (BOOL)hasVideo;
- (id)collectionView;
- (BOOL)isCurrentUser;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndexPath:(id)a0;

@end
