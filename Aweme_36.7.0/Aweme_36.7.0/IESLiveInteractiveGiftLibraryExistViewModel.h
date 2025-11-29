@class NSString, IESLiveCombineSubject, NSMutableArray;
@protocol IESLiveCompoundSubscription, IESLiveInteractiveGiftVMDelegate;

@interface IESLiveInteractiveGiftLibraryExistViewModel : NSObject <IESLiveInteractiveGiftListCollectionViewModelProtocol>

@property (weak, nonatomic) id<IESLiveInteractiveGiftVMDelegate> delegate;
@property (nonatomic) long long currentSelectIndex;
@property (retain, nonatomic) IESLiveCombineSubject *onGiftItemsRefreshed;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> bindToken;
@property (retain, nonatomic) NSMutableArray *giftItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)backButtonClick;
- (void)p_bindSignal;
- (void)refreshDataWithKeepSelect:(BOOL)a0;
- (void)performSelect;
- (void)selectItemWithIndexPath:(id)a0;
- (void)updateSelectIndex:(long long)a0;
- (void)trackGiftClickWithIndexPath:(id)a0;
- (id)getCurrentGiftItemCellWithIndex:(long long)a0;
- (long long)numberOfGifts;
- (void)doubleClickWithItem:(id)a0;
- (void)collectionViewNearBottom;
- (void)trackGiftShowWithIndexPath:(id)a0;
- (id)initWithGiftVMDelegate:(id)a0;
- (void)updateWithFetchedAudienceAbleGiftsGifts:(id)a0 poolGifts:(id)a1 keepSelect:(BOOL)a2;
- (void)trackGiftAddWithIndex:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
