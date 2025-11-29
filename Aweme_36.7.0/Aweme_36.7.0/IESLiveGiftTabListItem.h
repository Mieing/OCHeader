@class NSArray, IESLiveGiftPanelDataSharing, NSMutableSet, RACCommand, NSString;
@protocol IESLiveGiftPanelReaction;

@interface IESLiveGiftTabListItem : IESLiveRefactGiftPanelSectionViewModel <IESLiveRefactGiftPanelEventAction, IESLiveCollectionViewItemProtocol>

@property (nonatomic) long long currentIndex;
@property (nonatomic) long long currentPageType;
@property (nonatomic) long long currentSortType;
@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (nonatomic) BOOL enableTopics;
@property (retain, nonatomic) NSMutableSet *reporedTab;
@property (weak, nonatomic) id<IESLiveGiftPanelReaction> reaction;
@property (readonly, nonatomic) NSArray *collectionVMs;
@property (readonly, nonatomic) RACCommand *changeSelectionCmd;
@property (nonatomic) BOOL activeClick;
@property (nonatomic) unsigned long long interactTabTrailingImageRotationType;
@property (copy, nonatomic) id /* block */ updateGiftListTabs;
@property (copy, nonatomic) id /* block */ changeSelectTabFromGiftList;
@property (copy, nonatomic) id /* block */ updateTabTrailingImageBlock;
@property (copy, nonatomic) id /* block */ updateAccessibility;
@property (copy, nonatomic) id /* block */ rotateImageBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) Class cellClass;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) RACCommand *didSelectItemCommand;

- (void)didSetAttachingDIContext;
- (void)gpe_giftTopicExpandStatusWillChangeToExpand:(BOOL)a0 pageType:(long long)a1;
- (void)initTabWithIndex:(unsigned long long)a0;
- (void)gpe_didGiftPanelCollectionVMsUpdate;
- (id)initWithGiftPanelDataSharing:(id)a0;
- (void)didGiftPanelCollectionVMsUpdate;
- (void)observerWithCurrentPageIndex:(id)a0;
- (void)trackWhenGiftOrderDidClick:(unsigned long long)a0;
- (void)trackShowEvent:(long long)a0;
- (void)changeTabWithIndex:(unsigned long long)a0;
- (BOOL)shouldUpdateSortTypeAtCurrentIndex:(unsigned long long)a0;
- (void)updateSortTypeAtIndex:(unsigned long long)a0;
- (BOOL)shouldChangePaddingAndOffset;
- (void).cxx_destruct;

@end
