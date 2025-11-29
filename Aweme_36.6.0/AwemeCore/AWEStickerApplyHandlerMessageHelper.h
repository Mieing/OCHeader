@interface AWEStickerApplyHandlerMessageHelper : NSObject

+ (void)sendMessageToEffectWithMsgId:(long long)a0 arg1:(long long)a1 arg2:(long long)a2 arg3:(id)a3 cameraService:(id)a4 logTag:(id)a5;
+ (void)send0X29MessageToEffectWithDict:(id)a0 arg2:(long long)a1 cameraService:(id)a2 logTag:(id)a3;
+ (void)receiveEffectCaptureImage:(id)a0 cameraService:(id)a1 handleImageBlock:(id /* block */)a2;

@end
