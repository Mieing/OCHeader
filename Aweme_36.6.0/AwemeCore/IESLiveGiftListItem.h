@class HTSLiveGiftItemCollectionLayout, NSString, NSArray, RACSignal, HTSLiveGiftItemCollectionViewModel, RACCommand, IESLiveGiftPanelDataSharing, IESLiveRefactGiftPanelViewBuilderLayoutInfo;
@protocol IESLiveGiftPanelReaction;

@interface IESLiveGiftListItem : IESLiveRefactGiftPanelSectionViewModel <IESLiveRefactGiftPanelEventAction, IESLiveCollectionViewItemProtocol>

@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (nonatomic) BOOL giftPanelViewModelOpt;
@property (readonly, nonatomic) NSArray *collectionViewModelList;
@property (readonly, nonatomic) HTSLiveGiftItemCollectionViewModel *currentCollectionViewModel;
@property (readonly, nonatomic) HTSLiveGiftItemCollectionLayout *giftCollectionLayout;
@property (readonly, nonatomic) long long currentPageType;
@property (readonly, nonatomic) RACSignal *selectionSignal;
@property (retain, nonatomic) IESLiveRefactGiftPanelViewBuilderLayoutInfo *panelBuilderLayoutInfo;
@property (copy, nonatomic) id /* block */ updateGiftListCell;
@property (copy, nonatomic) id /* block */ sendGiftTaskBlock;
@property (retain, nonatomic) RACCommand *sendGiftCmd;
@property (weak, nonatomic) id<IESLiveGiftPanelReaction> reaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) Class cellClass;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) RACCommand *didSelectItemCommand;

- (void)didSetAttachingDIContext;
- (void)gpe_didGiftPanelCollectionVMsUpdate;
- (id)selectedCollectionViewModel;
- (id)itemViewModelWithPageType:(long long)a0;
- (id)initWithGiftPanelDataSharing:(id)a0;
- (void)didGiftPanelCollectionVMsUpdate;
- (id)initWithGiftPanelDataSharing:(id)a0 reaction:(id)a1;
- (void)p_bindSignal;
- (void)p_createSendGiftCommand;
- (void)p_sendGift;
- (void).cxx_destruct;
- (id)selectedItem;

@end
