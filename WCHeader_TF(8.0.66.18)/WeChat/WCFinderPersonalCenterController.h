@class MMFinderLivePurchasedFeedViewModel, NSString, WCFinderPersonalCenterParams, MMUIViewController, FinderNewUserPrepareResponse, WCFinderWebViewOpener, WCFinderContact;
@protocol WCFinderPersonalCenterControllerDelegate;

@interface WCFinderPersonalCenterController : NSObject <MMFinderLivePurchasedFeedViewModelDelegate>

@property (retain, nonatomic) WCFinderPersonalCenterParams *params;
@property (weak, nonatomic) MMUIViewController *hostVC;
@property (retain, nonatomic) WCFinderContact *contact;
@property (retain, nonatomic) FinderNewUserPrepareResponse *prepare;
@property (retain, nonatomic) WCFinderWebViewOpener *creatorWebVCOpener;
@property (copy, nonatomic) id /* block */ waittingPrepareBlock;
@property (retain, nonatomic) MMFinderLivePurchasedFeedViewModel *purchasedFeedViewModel;
@property (weak, nonatomic) id<WCFinderPersonalCenterControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)controllerWithHostVC:(id)a0 params:(id)a1;

- (id)init;
- (void)_onVCDidBePushOrPresend;
- (void)_updateCreator;
- (id)creatorCenterUrl;
- (unsigned long long)reportPostScene;
- (void)openSetting;
- (void)openHistory;
- (void)openLikeFav;
- (void)openFollow;
- (void)openPayment;
- (unsigned long long)purchasedCount;
- (unsigned long long)paidMicCount;
- (unsigned long long)paidCollectionCount;
- (unsigned long long)joinedMembershipCount;
- (void)openMsg;
- (void)openPrivateMsg;
- (void)openContact;
- (void)openFinderMsg;
- (void)openMemberMsg;
- (void)openFinderPrivateMsg;
- (void)openCreator;
- (void)openIncome:(BOOL)a0;
- (void)openCamera;
- (void)openLive;
- (void)openUnAuth;
- (void)userPrepareCgi:(id)a0 didGetResponse:(id)a1;
- (void)userPrepareCgi:(id)a0 didFailWithError:(id)a1;
- (void)onPurchasedFeedViewModelUpdated:(BOOL)a0 hasMoreData:(BOOL)a1;
- (void).cxx_destruct;

@end
