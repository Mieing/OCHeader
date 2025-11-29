@class NSString, MMTimer, FinderPaidCollectionInfo, NSData, WCFinderPaidCollectionConsumeAdapter;
@protocol WCFinderPaidCollectionConsumeLogicDelegate;

@interface WCFinderPaidCollectionConsumeLogic : NSObject <WCCoinConsumeLogicDelegate, WCFinderPaidCollectionExt>

@property (copy, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) FinderPaidCollectionInfo *paidCollection;
@property (retain, nonatomic) WCFinderPaidCollectionConsumeAdapter *consumeAdapter;
@property (copy, nonatomic) NSString *sourceFeedID;
@property (nonatomic) int reportScene;
@property (copy, nonatomic) NSString *billNo;
@property (retain, nonatomic) NSData *respBuff;
@property (nonatomic) BOOL waitingBillProcess;
@property (nonatomic) unsigned long long billWaitStartTimestamp;
@property (retain, nonatomic) MMTimer *waitBillTimeoutTimer;
@property (weak, nonatomic) id<WCFinderPaidCollectionConsumeLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFinderUsername:(id)a0 paidCollection:(id)a1 sourceFeedID:(id)a2 reportScene:(int)a3;
- (void)startPaidCollectionConsume;
- (void)fetchPaidCollectionPayBill;
- (void)onfetchPiadCollectionPayBillSuccess;
- (void)onfetchFPaidCollectionPayBillFail;
- (void)startWeCoinConsume;
- (id)genConsumeParameterWithMode:(unsigned long long)a0;
- (void)reportWeCoinPanelWithEvent:(id)a0;
- (void)onPurchaseFailWithMsg:(id)a0;
- (void)consumeDidSuccess:(id)a0 result:(id)a1;
- (void)consumeDidFail:(id)a0 error:(id)a1;
- (void)consumeDidCancel:(id)a0;
- (void)startWaitBillProcessing;
- (id)getCurrentViewController;
- (void)startLoadingOnCurrentVC;
- (void)endLoadingOnCurrentVC;
- (void)invalidTimeoutTimer;
- (void)billProcessTimeout;
- (void)onPaidCollectionTopicID:(id)a0 purchaseStateChanged:(BOOL)a1;
- (void).cxx_destruct;

@end
