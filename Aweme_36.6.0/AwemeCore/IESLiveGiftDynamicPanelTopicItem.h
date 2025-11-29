@class NSString, IESLiveCombineSubject, IESLiveGiftPanelDataSharing;

@interface IESLiveGiftDynamicPanelTopicItem : NSObject <IESLiveRefactGiftPanelEventAction, IESLiveAioLinkOperationTopicService, IESLiveGiftDynamicPanelItemProtocol>

@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (nonatomic) long long currentPageType;
@property (retain, nonatomic) IESLiveCombineSubject *allTopicSubject;
@property (retain, nonatomic) IESLiveCombineSubject *topicScrollSubject;
@property (copy, nonatomic) NSString *showFrom;
@property (nonatomic) BOOL topicPermanentEnable;
@property (nonatomic) long long triggerAnimationContentOffset;
@property (nonatomic) BOOL needConsume;
@property (nonatomic) BOOL isInInteract;
@property (nonatomic) long long inInteractTabIndex;
@property (nonatomic) BOOL expanded;
@property (nonatomic) BOOL animating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)gpe_topicCollectionViewDidScrollTo:(long long)a0;
- (void)gpe_giftListScrollViewDidScroll:(id)a0 tabIndex:(long long)a1 layoutDirection:(long long)a2;
- (void)gpe_giftListScrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)gpe_giftListScrollViewWillBeginDragging:(id)a0 tabIndex:(long long)a1 layoutDirection:(long long)a2;
- (void)gpe_dataSharing_currentPageIndexWillChangeFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)gpe_didGiftPanelCollectionVMsUpdate;
- (void)gpe_giftTopicExpandAnimationFinishWithToExpand:(BOOL)a0 pageType:(long long)a1;
- (id)lynxData;
- (void)updatePanelDataSharing:(id)a0;
- (void)updatePageType:(unsigned long long)a0;
- (id)initWithGiftPanelDataSharing:(id)a0;
- (void)selectTopicWithTopicId:(id)a0 pageType:(id)a1;
- (id)observeUpdateAllTopic;
- (id)observeCurrentSelectTopic;
- (void)clickSearch;
- (void)updateShowFromWithWithExpand:(BOOL)a0 type:(unsigned long long)a1;
- (void)sendTopicDataWithLastShowFrom:(id)a0;
- (void)animationStartWithExpand:(BOOL)a0 type:(unsigned long long)a1;
- (void)doAnimationWithType:(unsigned long long)a0;
- (void)animationFinishedWithExpand:(BOOL)a0 type:(unsigned long long)a1;
- (id)topicData;
- (void)sendAllTopicIfNeededWithPrePageType:(long long)a0;
- (BOOL)shouldAutoExpand;
- (void)updateGiftPanelTopicItemLastShowDate;
- (void).cxx_destruct;
- (void)update:(long long)a0;
- (void)setup;

@end
