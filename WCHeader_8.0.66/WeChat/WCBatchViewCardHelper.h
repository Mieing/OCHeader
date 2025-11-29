@class NSString, NSMutableArray, MMUIViewController;
@protocol WCBatchViewCardHelpDelegate;

@interface WCBatchViewCardHelper : MMObject <IWCCardPkgExt, WCNewCardDetailViewControllerDelegate, WCCardListViewControllerDelegate>

@property (retain, nonatomic) NSMutableArray *aryCardData;
@property (retain, nonatomic) MMUIViewController *currViewController;
@property (weak, nonatomic) id<WCBatchViewCardHelpDelegate> delegate;
@property (nonatomic) unsigned long long fromScene;
@property (retain, nonatomic) MMUIViewController *nextViewController;
@property (retain, nonatomic) NSString *templateMsgId;
@property (nonatomic) unsigned long long appBrandModeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)handleCardTpInfoList:(id)a0 fromScene:(unsigned long long)a1 isPush:(BOOL)a2;
- (void)onWCCardListViewControllerCancel:(id)a0;
- (void)onWCCardListDidBeCleared;
- (void)onWCCardListViewControllerDidSelected:(id)a0 listViewController:(id)a1;
- (void)onDetailDidBeCleared;
- (void)onGiftCard:(id)a0 lastIndex:(id)a1;
- (void)onUseCard:(id)a0 lastIndex:(id)a1 delayTime:(double)a2;
- (void)onGetCardsItemByTpInfo:(id)a0 ErrCode:(int)a1;
- (void)handleGiftCardTpInfoList:(id)a0 fromScene:(unsigned long long)a1;
- (void).cxx_destruct;

@end
