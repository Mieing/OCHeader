@class NSString, NSMutableArray, IESLiveCombineSubject;
@protocol IESLiveCompoundSubscription, IESLiveSubscription, IESLiveInteractiveGiftVMDelegate;

@interface IESLiveInteractiveGiftAudienceAbleViewModel : NSObject <IESLiveInteractiveGiftListCollectionViewModelProtocol>

@property (weak, nonatomic) id<IESLiveInteractiveGiftVMDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *giftIdPinArray;
@property (retain, nonatomic) NSMutableArray *giftIdDislikeArray;
@property (retain, nonatomic) IESLiveCombineSubject *onGiftItemsRefreshed;
@property (retain, nonatomic) IESLiveCombineSubject *onGiftItemMoved;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> bindToken;
@property (retain, nonatomic) id<IESLiveSubscription> giftListFetchedDisposable;
@property (nonatomic) long long maxPinCount;
@property (nonatomic) BOOL isFirstScreen;
@property (retain, nonatomic) NSMutableArray *giftItems;
@property (nonatomic) long long currentSelectIndex;
@property (nonatomic) BOOL isInPin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)backButtonClick;
- (void)addButtonClick;
- (void)p_bindSignal;
- (void)pinButtonClick;
- (void)refreshDataWithKeepSelect:(BOOL)a0;
- (void)performSelect;
- (void)resumeNoSelect;
- (void)trackGiftPanelShowIfNeeded;
- (void)selectItemWithIndexPath:(id)a0;
- (void)updateSelectIndex:(long long)a0;
- (void)trackGiftClickWithIndexPath:(id)a0;
- (void)moveItemFromIndex:(long long)a0 selectMode:(unsigned long long)a1;
- (void)deleteGiftWithIndexPath:(id)a0;
- (void)replaceFirstPinGiftFromIndex:(long long)a0;
- (void)showConfirmViewWithCallback:(id /* block */)a0;
- (void)trackClickWithClickType:(id)a0;
- (id)getItemTrackParamsWithIndexPath:(id)a0;
- (id)getCurrentGiftItemCellWithIndex:(long long)a0;
- (long long)numberOfGifts;
- (void)doubleClickWithItem:(id)a0;
- (void)collectionViewNearBottom;
- (void)trackGiftShowWithIndexPath:(id)a0;
- (id)initWithGiftVMDelegate:(id)a0;
- (void)trackGiftRemoveWithIndexPath:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
