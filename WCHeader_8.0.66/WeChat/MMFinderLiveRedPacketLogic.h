@class NSMutableDictionary, NSArray, MMFinderLiveTaskId, NSString;
@protocol MMFinderLiveRedPacketLogicDelegate;

@interface MMFinderLiveRedPacketLogic : NSObject <WCFinderLiveExt, WCRedEnvelopesSendControlLogicDelegate, WCRedEnvelopesLiveStreamReceiveControlLogicDelegate>

@property (class, weak, nonatomic) MMFinderLiveRedPacketLogic *currentLogic;

@property (retain, nonatomic) NSMutableDictionary *redPacketDictionary;
@property (retain, nonatomic) NSMutableDictionary *redPacketQueueDictionary;
@property (retain, nonatomic) NSMutableDictionary *stagingSendInfoDictionary;
@property (readonly, nonatomic) MMFinderLiveTaskId *taskId;
@property (weak, nonatomic) id<MMFinderLiveRedPacketLogicDelegate> delegate;
@property (retain, nonatomic) NSArray *bindingRoomContacts;
@property (nonatomic) BOOL canSendRedPackets;
@property (nonatomic) BOOL canReceiveRedPackets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)_init;
- (void)dealloc;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (id)currentLiveTask;
- (id)redPacketQueueForSenderMicId:(id)a0;
- (void)handleWithNewRedPacketItem:(id)a0;
- (void)displayNewRedPacketItem:(id)a0;
- (void)appendCommentWithRedPacketSendInfo:(id)a0;
- (void)appendCommentWithRedPacketReceiveInfo:(id)a0;
- (id)myUsername;
- (id)handleWithRedPacketInfo:(id)a0;
- (void)handleWithSendRedPacketInfo:(id)a0;
- (void)handleWithReceiveRedPacketInfo:(id)a0;
- (void)onGetFinderLiveRedPacketsWithTaskId:(id)a0 redPacketInfos:(id)a1;
- (void)onGetFinderLiveAppMessageWithTaskId:(id)a0 sendRedPacketInfo:(id)a1;
- (void)onGetFinderLiveAppMessageWithTaskId:(id)a0 receiveRedPacketInfo:(id)a1;
- (void)sendRedPacket;
- (BOOL)isViewControllerVisible;
- (void)openRedPacketWithItem:(id)a0;
- (void)showRedPacketDetailWithReceiveInfo:(id)a0;
- (void)openRedPacketWithCommentItem:(id)a0;
- (void)showRedPacketDetailWithCommentItem:(id)a0;
- (void)openRedPacketWithMessage:(id)a0;
- (void)OnWCRedEnvelopesSendControlLogicPaySuccess:(id)a0;
- (void)OnWCRedEnvelopesLiveStreamReceiveControlLogicReceiveDone:(unsigned long long)a0 messageWrap:(id)a1;
- (void).cxx_destruct;

@end
