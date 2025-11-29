@class MMFinderLiveECShopWindowShareTask, ForwardMessageLogicController, WCLiveProductShareScrollActionSheet, NSString;

@interface MMFinderLiveECShopWindowShareLogic : MMFinderLiveECBaseShareLogic <MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, ForwardMessageLogicDelegate>

@property (retain, nonatomic) WCLiveProductShareScrollActionSheet *shareActionSheet;
@property (retain, nonatomic) MMFinderLiveECShopWindowShareTask *task;
@property (retain, nonatomic) ForwardMessageLogicController *forwardLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onLiveECShareWithShareTask:(id)a0;
- (void)shareProductShowWithShareTask:(id)a0;
- (void)shareActionSheeterWithShareTask:(id)a0;
- (void)onShareButtonTapped;
- (void)shareItem:(id)a0 WithContact:(id)a1;
- (void)shareItemWithInstaller:(id /* block */)a0 contact:(id)a1;
- (BOOL)OnForwardMessageNeedCancelConfirm:(id)a0;
- (void)loadShareItemWithShareTask:(id)a0 completion:(id /* block */)a1;
- (void)scrollActionSheet:(id)a0 didSelecteItem:(id)a1;
- (void)clickRFItemCallBack:(id)a0;
- (void)relayoutScrollSheet;
- (void)shareToChat:(id)a0;
- (void)realSendToShare:(id)a0;
- (void).cxx_destruct;

@end
