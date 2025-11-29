@class NSString;
@protocol WXCustomWebViewControllerProtocol;

@interface H5VideoProxyManager : MMUserService <MMServiceProtocol> {
    BOOL _isInit;
}

@property (weak, nonatomic) id<WXCustomWebViewControllerProtocol> proxyWebviewController;
@property (nonatomic) BOOL isNeedReInitFromSuspend;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)dealloc;
- (void)applicationWillSuspend;
- (void)onServiceEnterForeground;
- (BOOL)initProxyFromWebVC:(id)a0;
- (BOOL)tryInit;
- (void)deinitProxy;
- (void)doDeinitProxy;
- (void)stopPlay:(int)a0;
- (id)startPlay:(id)a0;
- (void)setRemainTime:(int)a0 PlayDataId:(int)a1;
- (void)setPlayState:(int)a0;
- (int)preload:(int)a0 Time:(int)a1;
- (void)reportInitIDKeyForResult:(int)a0;
- (void)tryDeinitProxyWhenSuspend;
- (void)tryReInitProxyWhenEnterForground;
- (void).cxx_destruct;

@end
