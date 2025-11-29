@class AAQueryListRes, NSString;

@interface WCPayGPOrderHistoryControlLogic : WCPayControlLogic <PBMessageObserverDelegate, WCPayGPOrderHistoryControllerDelegate, WCPayGPOrderStatusControlLogicDelegate>

@property (nonatomic) BOOL bIsFromTop;
@property (nonatomic) unsigned long long curHistoryScene;
@property (nonatomic) unsigned long long reqestingHistoryScene;
@property (retain, nonatomic) AAQueryListRes *lastQueryListResp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0;
- (void)startLogic;
- (void)stopLogic;
- (void)onOrderHistoryViewControllerCancel;
- (void)loadMoreOrderHistoryWithOffset:(unsigned int)a0;
- (void)onOrderHistoryViewControllerUserSelectRecord:(id)a0;
- (void)onOrderHistoryViewControllerChangeScene:(unsigned long long)a0;
- (void)orderHasBeenClose:(id)a0;
- (void)orderStatusLogicDidStop:(BOOL)a0;
- (void)queryLaunchOrderHistoryWithOffset:(unsigned int)a0;
- (void)onGetGroupPayOrderHistory:(id)a0;
- (void)onGetGroupPayOrderHistoryRespBack;
- (void)onGetGroupPayOrderHistoryError;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
