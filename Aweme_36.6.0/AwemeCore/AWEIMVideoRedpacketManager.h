@class AWEAwemeModel, AWEIMDouyinRedPacketDataManager, AWEIMDouyinRedPacketInfoResponse, NSString, NSDictionary, AWEIMDouyinRedPacketCoverModel, UIViewController, AWEIMDouyinRedPacketTransferManager, AWEIMDouyinRedPacketModel;
@protocol AWEAwemePlayInteractionPanelControllerProtocol;

@interface AWEIMVideoRedpacketManager : HTSService <AWEIMVideoRedpacketManager>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEIMDouyinRedPacketDataManager *dataManager;
@property (retain, nonatomic) AWEIMDouyinRedPacketTransferManager *transferManager;
@property (retain, nonatomic) AWEIMDouyinRedPacketInfoResponse *infoResponse;
@property (retain, nonatomic) AWEIMDouyinRedPacketCoverModel *coverModel;
@property (retain, nonatomic) UIViewController *halfLynxVC;
@property (retain, nonatomic) AWEIMDouyinRedPacketModel *infoModel;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (weak, nonatomic) id<AWEAwemePlayInteractionPanelControllerProtocol> panelController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isFromShare;
- (void)fetchRedPacketButtonShowStatusWithModel:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (id)p_buildCallbackModelWithInfo:(id)a0;
- (BOOL)p_redPacketValidWithInfoResponse:(id)a0;
- (BOOL)p_isRedPacketOpenedWithInfo:(id)a0;
- (id)getButtonTitleIsOpened:(BOOL)a0 info:(id)a1 awemeModel:(id)a2;
- (BOOL)p_shouldHiddenWithInitialTime:(long long)a0;
- (BOOL)p_openVideoHalfPanelVCWithCompletion:(id /* block */)a0;
- (void)p_openRedPacketViewControllerInfoResponse:(id)a0 coverModel:(id)a1 completion:(id /* block */)a2;
- (void)p_notifyIMOpenedVideoRedPacket;
- (id)p_trackStatusWithInfo:(id)a0;
- (void)fetchRedPacketButtonShowStatusWithModel:(id)a0 completion:(id /* block */)a1;
- (void)openRedPacketCompletion:(id /* block */)a0;
- (void)trackWithEvent:(id)a0 info:(id)a1 param:(id)a2;
- (void)requestRedPacketBulletMsgWithVideoId:(id)a0 orderNo:(id)a1 imageIndex:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
