@class NSArray, NSString, IESLiveGiftPanelDataSharing, RACCommand;
@protocol IESLiveSubscription, IESLiveGiftPanelReaction, IESLiveGiftModuleRecipientRouter;

@interface IESLiveGiftRecipientSectionViewModel : IESLiveRefactGiftPanelSectionViewModel <IESLiveRefactGiftPanelEventAction, IESLiveSocialInteractAction, IESLiveCollectionViewItemProtocol>

@property (retain, nonatomic) id<IESLiveGiftModuleRecipientRouter> recipientRouter;
@property (retain, nonatomic) id<IESLiveSubscription> giftPageTypeDisposable;
@property (retain, nonatomic) id<IESLiveSubscription> giftSearchDisposable;
@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (copy, nonatomic) id /* block */ dataDidUpdate;
@property (copy, nonatomic) id /* block */ updateView;
@property (copy, nonatomic) id /* block */ showBlock;
@property (copy, nonatomic) id /* block */ hiddenBlock;
@property (retain, nonatomic) NSArray *guestEntityConfigs;
@property (nonatomic) unsigned long long guestInfoType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) Class cellClass;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) RACCommand *didSelectItemCommand;
@property (weak, nonatomic) id<IESLiveGiftPanelReaction> reaction;

- (void)didSetAttachingDIContext;
- (void)gpe_didGiftPanelCollectionVMsUpdate;
- (void)notifyInteractiveGuestListChanged:(id)a0;
- (id)createSectionView;
- (id)initWithGiftPanelDataSharing:(id)a0;
- (void)didGiftPanelCollectionVMsUpdate;
- (id /* block */)showGuestListViewBlock;
- (void)refreshGiftEntranceWithUpdateOrder:(BOOL)a0;
- (void)tagGuestWithUid:(id)a0;
- (void)tagGuestEntrance;
- (void)setUpRAC;
- (id)extraTrackForShow;
- (void)refreshGiftEntranceModelWithUpdateOrder:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
