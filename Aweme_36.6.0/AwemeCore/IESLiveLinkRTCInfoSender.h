@class IESLiveLinkRTCEngineManager, IESLiveLinkRTCRoomManager, NSString, IESLiveLinkVideoParamsManager;

@interface IESLiveLinkRTCInfoSender : NSObject <IESLiveLinkMessage>

@property (weak, nonatomic) IESLiveLinkRTCEngineManager *engineManager;
@property (weak, nonatomic) IESLiveLinkRTCRoomManager *roomManager;
@property (weak, nonatomic) IESLiveLinkVideoParamsManager *videoParamsManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)sendUserMessageOutsideRoom:(id)a0 message:(id)a1;
- (int)sendSEIMessage:(id)a0 andRepeatCount:(int)a1;
- (long long)sendUserMessage:(id)a0 message:(id)a1;
- (long long)sendUserBinaryMessage:(id)a0 message:(id)a1;
- (id)initWithEngineManager:(id)a0 roomManager:(id)a1 videoParamsManager:(id)a2;
- (int)sendRoomBinaryMessage:(id)a0;
- (int)sendRoomMessage:(id)a0;
- (int)sendStreamSyncInfo:(id)a0 config:(id)a1;
- (void).cxx_destruct;

@end
