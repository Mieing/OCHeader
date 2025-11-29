@interface AWEStickerApplyTimeConsumingPropHandler : AWEStickerApplyBaseHandler

@property (nonatomic) BOOL shouldHandleProp;
@property (copy, nonatomic) id /* block */ handler;

- (void)sendMessageToEffect:(id)a0;
- (id)publishModel;
- (void)camera:(id)a0 didRecvMessage:(id)a1;
- (void)camera:(id)a0 didApplySticker:(id)a1 success:(BOOL)a2;
- (void)camera:(id)a0 willApplySticker:(id)a1;
- (void)handlerDidBecomeActive;
- (id)decodeArg3:(id)a0;
- (void)toggleTimeConsumingFlowOnOff:(BOOL)a0;
- (void)toggleTimeConsuminguploadIsRender;
- (BOOL)isDisabledPath;
- (double)extendDurationOfSticker:(id)a0;
- (void)handleMessageIfNeeded:(id)a0;
- (void)handleResourceReady;
- (void)handleTimeConsumingPropMessage:(id)a0 originalStringMsg:(id)a1;
- (void)receiveEffectCaptureImage:(id)a0;
- (void)handleDidStartGenerating:(id)a0;
- (void)handleDidEndGenerating:(id)a0;
- (void)handleReadyForTransition:(id)a0;
- (void)handleDidFailGenerating:(id)a0 parseBody:(id)a1;
- (void).cxx_destruct;
- (void)resetData;

@end
