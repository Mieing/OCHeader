@class AWEIMVideoRedpacketManager, NSString;

@interface AWERedPacketShareChannel : AWEShareBaseChannel <AWEShareItemDelegate>

@property (retain, nonatomic) AWEIMVideoRedpacketManager *redPacketManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shareWithCompletion:(id /* block */)a0;
- (id)shareImage;
- (void)shareItem:(id)a0 willAppear:(BOOL)a1;
- (void)p_showDialog;
- (void)p_showSendRedPacketVCWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)a0;

@end
