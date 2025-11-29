@class NSString, ForwardMessageLogicController, WCLiveProductShareScrollActionSheet, MMFinderLiveProductShareTask;

@interface MMFinderLiveECProductShareLogic : MMFinderLiveECBaseShareLogic <MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, ForwardMessageLogicDelegate>

@property (retain, nonatomic) WCLiveProductShareScrollActionSheet *shareActionSheet;
@property (retain, nonatomic) MMFinderLiveProductShareTask *task;
@property (retain, nonatomic) ForwardMessageLogicController *forwardLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onLiveECShareWithShareTask:(id)a0;
- (void)shareProductShowWithShareTask:(id)a0;
- (void)shareActionSheeterWithShareTask:(id)a0;
- (void)shareItem:(id)a0 toContact:(id)a1;
- (void)directShareItem:(id)a0 toContact:(id)a1;
- (id)buildMessageWrapWithItem:(id)a0;
- (BOOL)OnForwardMessageNeedCancelConfirm:(id)a0;
- (void)shareProductLoadProductWithShareTask:(id)a0 completeBlock:(id /* block */)a1;
- (id)finderDataItemTryCurrentLiveWithAnchor:(id)a0;
- (void)buildProductShareItemWithProduct:(unsigned long long)a0 withLive:(id)a1 promoterKey:(id)a2 cpsProductId:(unsigned long long)a3 lastGMsgID:(id)a4 ecSource:(id)a5 scene:(int)a6 completion:(id /* block */)a7;
- (void)buildProductShareItemWithShareTask:(id)a0 completion:(id /* block */)a1;
- (void)scrollActionSheet:(id)a0 didSelecteItem:(id)a1;
- (void)clickRFItemCallBack:(id)a0;
- (void)relayoutScrollSheet;
- (void)shareToChat:(id)a0;
- (void)realSendToShare:(id)a0;
- (void)onShareButtonTapped;
- (void).cxx_destruct;

@end
