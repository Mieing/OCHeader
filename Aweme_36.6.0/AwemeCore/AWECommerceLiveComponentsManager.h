@class NSObject, NSString, UIImageView, UIView, AWEOriginalAdModel, BDImageView;
@protocol AWEAdPromptViewManager;

@interface AWECommerceLiveComponentsManager : NSObject <AWECommerceLiveComponentsManager>

@property (retain, nonatomic) UIImageView *entranceImageView;
@property (retain, nonatomic) UIView *motionEntranceContainerView;
@property (retain, nonatomic) BDImageView *motionEntranceImageView;
@property (retain, nonatomic) AWEOriginalAdModel *adInfo;
@property (retain, nonatomic) NSObject<AWEAdPromptViewManager> *adPromptManager;
@property (nonatomic) BOOL hasLiveCardShowed;
@property (nonatomic) BOOL isUseNewEntranceWebPIcon;
@property (nonatomic) double cardViewBottomY;
@property (nonatomic) double cardViewLeftX;
@property (copy, nonatomic) id /* block */ cardDisappearCompletionBlock;
@property (copy, nonatomic) id /* block */ closeBtnTapToDisappearCardCompletionBlock;
@property (copy, nonatomic) id /* block */ getLiveRoomInfoBlock;
@property (nonatomic) BOOL enableClueAutoOpen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contentViewOfCard;
- (void)updateJSBridgeCardStatus:(id)a0;
- (id)handleAdInfoWithCommerceModel:(id)a0;
- (void)configEntranceImageView:(id)a0;
- (BOOL)needClueAdAutoOpen:(id)a0 hasShowedCard:(BOOL)a1;
- (void)configEntranceMotionImageView;
- (id)entranceView;
- (id)motionEntranceView;
- (void)startMotionAnimationIfNeeded;
- (void)showCardViewOnParentView:(id)a0 animationAnchorPoint:(struct CGPoint { double x0; double x1; })a1 toolBar:(id)a2 completionBlock:(id /* block */)a3;
- (void)showNewStyleCardInNewContainerView:(id)a0 cardSize:(struct CGSize { double x0; double x1; })a1 completionBlock:(id /* block */)a2;
- (void)hideCardViewWithAnchorPoint:(struct CGPoint { double x0; double x1; })a0 completionBlock:(id /* block */)a1;
- (void)hideNewStyleCardView:(id)a0 completionBlock:(id /* block */)a1;
- (void)keepCardShowing:(struct CGPoint { double x0; double x1; })a0 commercialEntrancePoint:(struct CGPoint { double x0; double x1; })a1;
- (void)cardDisappearFromRightToLeft;
- (void)fetchAdInfoWithScene:(long long)a0 params:(id)a1 completionBlock:(id /* block */)a2;
- (void)fetchAdConfigWithSecUserID:(id)a0 configID:(id)a1 completionBlock:(id /* block */)a2;
- (void)fetchAdDownloadClickWithAnchorID:(id)a0 roomID:(id)a1 cardID:(id)a2 completionBlock:(id /* block */)a3;
- (void)configAdInfoForCardView:(id)a0 parentView:(id)a1;
- (void)configAdInfoForCardView:(id)a0;
- (id)adInfoWithPushContent:(id)a0;
- (id)liveConfigModelWithContent:(id)a0;
- (void)downloadURLs:(id)a0 cacheDirName:(id)a1 fileName:(id)a2 completionBlock:(id /* block */)a3;
- (void)receivingLiveAdCouponWithParams:(id)a0 completion:(id /* block */)a1;
- (void)fetchGoodsProductInfo:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)cardView;

@end
