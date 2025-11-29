@class MMFinderLiveConnectMicPKForegroundGiftContainerView, NSMutableDictionary, NSString, MMFinderLiveRewardGiftItem, MMFinderLiveTaskId;

@interface MMFinderLiveConnectMicPKForegroundGiftLogic : NSObject <MMFinderLiveMgrExt, MMLiveRewardGiftRecievingAnimationExt, MMFinderLiveGiftResourceMgrExt, MMLiveTaskMgrExt>

@property (retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem;
@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (retain, nonatomic) MMFinderLiveConnectMicPKForegroundGiftContainerView *giftContainerView;
@property (retain, nonatomic) NSMutableDictionary *giftId2PercentCacheMap;
@property (copy, nonatomic) id /* block */ onContainerViewSetup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)clear;
- (void)dealloc;
- (void)refreshForegroundView;
- (void)updateForegroundHeightPercent:(unsigned int)a0 giftId:(id)a1 username:(id)a2;
- (void)findForegroundGiftItemInList:(id)a0;
- (unsigned long long)giftItemRealResourceMemoryCacheOptions:(id)a0;
- (void)createForegroundViewIfNeeded;
- (void)onFetchRewardGiftListWithLiveTaskId:(id)a0 liveGiftItems:(id)a1;
- (void)onSingleAttackGiftDidFinishRender:(id)a0 attackUsername:(id)a1;
- (void)onLiveGiftResDownloadCompleted:(id)a0 retry:(unsigned long long)a1 totalLength:(unsigned long long)a2 resType:(long long)a3 productId:(id)a4 downloadUrl:(id)a5;
- (void)onLiveTask:(id)a0 SEIMicMsgInfoUpdated:(id)a1 listChanged:(BOOL)a2;
- (void)onLiveViewMainVideoViewFrameChanged:(id)a0 newVideoViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onLiveViewCdnPlayerViewFrameChanged:(id)a0 newCdnPlayerViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onLiveViewConnectMicViewFrameChanged:(id)a0 newConnectMicViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
