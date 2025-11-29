@class NSString;

@interface IESIMVideoMessageSender : NSObject <IESIMSendMessageFlowProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sendMessageWithInput:(id)a0 queue:(id)a1;
+ (id)resendMessage:(id)a0 con:(id)a1 trackContext:(id)a2 queue:(id)a3;
+ (void)forwardSendLocalMessage:(id)a0 toCon:(id)a1 trackContext:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
+ (id)appendDefaultToTrackContext:(id)a0;
+ (void)resetForwardMsgWhenFilePathEmpty:(id)a0 toConversation:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)generateCoverWithAssetID:(id)a0 videoAsset:(id)a1 completion:(id /* block */)a2;
+ (void)generateCoverFromVideoAsset:(id)a0 completion:(id /* block */)a1;


@end
