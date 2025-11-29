@class NSString, IESLiveCombineSubject, IESLiveGiftPanelDataSharing;

@interface IESLiveGiftPanelTopicItem : IESLiveRefactGiftPanelSectionViewModel <IESHYHybridViewLifecycleProtocol, IESLiveRefactGiftPanelEventAction, IESLiveAioLinkOperationTopicService>

@property (retain, nonatomic) IESLiveGiftPanelDataSharing *dataSharing;
@property (nonatomic) long long currentPageType;
@property (retain, nonatomic) IESLiveCombineSubject *animationSubject;
@property (retain, nonatomic) IESLiveCombineSubject *allTopicSubject;
@property (retain, nonatomic) IESLiveCombineSubject *topicScrollSubject;
@property (copy, nonatomic) NSString *showFrom;
@property (nonatomic) BOOL topicPermanentEnable;
@property (nonatomic) BOOL liveGiftPanelNewArchitecture;
@property (nonatomic) BOOL needConsume;
@property (readonly, nonatomic) long long triggerAnimationContentOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)gpe_topicCollectionViewDidScrollTo:(long long)a0;
- (void)gpe_dataSharing_currentPageIndexWillChangeFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)gpe_didGiftPanelCollectionVMsUpdate;
- (void)doAnimationWithView:(id)a0 expand:(BOOL)a1 duration:(float)a2 completion:(id /* block */)a3;
- (void)updatePageType:(unsigned long long)a0;
- (id)initWithGiftPanelDataSharing:(id)a0;
- (void)selectTopicWithTopicId:(id)a0 pageType:(id)a1;
- (id)observeUpdateAllTopic;
- (id)observeCurrentSelectTopic;
- (void)clickSearch;
- (void)updateShowFromWithWithExpand:(BOOL)a0 type:(unsigned long long)a1;
- (void)animationStartWithExpand:(BOOL)a0 type:(unsigned long long)a1;
- (id)topicData;
- (BOOL)shouldAutoExpand;
- (void)updateGiftPanelTopicItemLastShowDate;
- (void)setUp;
- (void).cxx_destruct;

@end
