@class NSString, IESLiveCombineSubject, IESLiveGiftPanelDataSharing;
@protocol IESLiveGiftModuleRecipientRouter;

@interface IESLiveAioLinkGiftTabDataUseCaseItem : NSObject <IESLiveAioLinkGiftTabDataUseCase, IESLiveRefactGiftPanelEventAction, IESLiveAioLinkGiftTabActionUseCase, IESLiveGiftDynamicPanelItemProtocol>

@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (retain, nonatomic) IESLiveCombineSubject *tabListPublisher;
@property (weak, nonatomic) id<IESLiveGiftModuleRecipientRouter> recipientRouter;
@property (nonatomic) long long currentPageType;
@property (nonatomic) long long currentIndex;
@property (nonatomic) long long currentSortType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)gpe_didGiftPanelCollectionVMsUpdate;
- (id)lynxData;
- (id)searchConfig;
- (void)updatePanelDataSharing:(id)a0;
- (id)initWithGiftPanelDataSharing:(id)a0;
- (id)aiAgentConfig;
- (id)observeCurrentTab;
- (id)observeTabList;
- (void)clickTab:(id)a0;
- (void)observerWithCurrentPageIndex:(id)a0;
- (void)trackWhenGiftOrderDidClick:(unsigned long long)a0;
- (void)updateSortTypeWithSortType:(unsigned long long)a0 index:(long long)a1;
- (void)sendTabList;
- (id)tabList;
- (void).cxx_destruct;

@end
