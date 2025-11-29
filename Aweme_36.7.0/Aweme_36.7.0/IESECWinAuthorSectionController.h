@class IESECWinMultipleFunctionsFollowViewModel, IESECServiceProxy, FBKVOController, UICollectionViewCell, IESECWinAuthorObject;
@protocol IESECWinBackService, IESECFansClubService, IESECWinMainScrollService, IESECWinAuthorService, IESECWinLiveService, IESECWinPageCardService, IESECWInAuthorCellProtocol, IESECWinSplitService, IESECWinFeedService;

@interface IESECWinAuthorSectionController : IESECWinListKitCellController

@property (retain, nonatomic) IESECWinAuthorObject *object;
@property (weak, nonatomic) UICollectionViewCell<IESECWInAuthorCellProtocol> *authorCell;
@property (retain, nonatomic) FBKVOController *kvoCtrl;
@property (retain, nonatomic) IESECServiceProxy<IESECWinFeedService> *feedService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinBackService> *backService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLiveService> *liveService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinSplitService> *splitService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinAuthorService> *authorService;
@property (retain, nonatomic) IESECServiceProxy<IESECFansClubService> *fansClubService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinPageCardService> *pageCardService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinMainScrollService> *scrollService;
@property (retain, nonatomic) IESECWinMultipleFunctionsFollowViewModel *followViewModel;

- (void)clickAvatar;
- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (void)transferToLiveRoom;
- (id)configWithCell:(id)a0;
- (void)updateCellWithTransformState:(long long)a0 withSection:(long long)a1;
- (void)showFansClubBubbleFirst:(id)a0;
- (BOOL)isShowBubble;
- (void)updateObjectWithTransformState:(long long)a0;
- (void)transferGuideInfoDataToHeaderStateCollapsed_B;
- (void)transferGuideInfoDataToHeaderStateExpanded;
- (id)p_infosFromList:(id)a0 colorString:(id)a1;
- (id)p_transferTopManageInfoFromFansAmount:(id)a0;
- (id)p_transferTopManageInfoFromGuideInfo:(id)a0;
- (id)p_transferBottomManageInfoFromGuideInfo:(id)a0;
- (id)p_infosFromGuideInfo:(id)a0 textColor:(id)a1;
- (id)getNewStyleReputationTrackParams;
- (void)transferToShopReputationDetailPage;
- (void)trackAuthorInfoClick:(id)a0;
- (BOOL)exceedFansClubBubbleShowLimit;
- (BOOL)exceedFansClubGuideBubbleShowLimit;
- (void)transferGuideInfoDataToHeaderStateCollapsed_A;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (void)addObserver;
- (void)scrollViewDidScroll;
- (id)currentCell;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
