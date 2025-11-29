@class NSString;

@interface IESIMLocationMessageSender : NSObject <IESIMSendMessageFlowProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sendMessageWithInput:(id)a0 queue:(id)a1;
+ (id)resendMessage:(id)a0 con:(id)a1 trackContext:(id)a2 queue:(id)a3;
+ (void)forwardSendLocalMessage:(id)a0 toCon:(id)a1 trackContext:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
+ (id)appendDefaultToTrackContext:(id)a0;


@end
