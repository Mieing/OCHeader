@class BDXBridgeEventSubscriber, NSString;

@interface AWEYAPRedPacketService : HTSService <AWEYAPRedPacketService>

@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) double routerInvokeTimeStamp;
@property (copy, nonatomic) NSString *teaSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getCoverInfoWithCoverID:(id)a0 fromCache:(BOOL)a1 completion:(id /* block */)a2;
- (void)getCoverImage:(id)a0 imageType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)getCoverImage:(id)a0 imageType:(unsigned long long)a1 size:(struct CGSize { double x0; double x1; })a2 completion:(id /* block */)a3;
- (void)openSendRedPacketWithModel:(id)a0;
- (id)getTransferManager;
- (id)getDefaultTransferManager;
- (id)getVideoManager;
- (BOOL)isRedPacketEndWithMessage:(id)a0;
- (void)p_subscribeEvent;
- (id)getRedpacketSettingsAction:(id)a0;
- (void)p_unsubscribeEvent;
- (BOOL)p_couldOpenSendRedPacketWithModel:(id)a0;
- (void)p_processSendEventWithParam:(id)a0;
- (void)p_processSendLoadedEvent;
- (BOOL)p_enableIMRPNewSendPageWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
