@class TingTextureInfo, NSString, NSObject, TingMVTextureUpdateListenerApi;
@protocol FlutterTextureRegistry;

@interface TingMVRenderTexture : NSObject <TingFlowPlayerNotification, FlutterTexture>

@property (nonatomic) long long textureId;
@property (retain, nonatomic) TingTextureInfo *textureInfo;
@property (readonly, nonatomic) NSObject<FlutterTextureRegistry> *registry;
@property (nonatomic) struct __CVBuffer { } *currentPixelBuffer;
@property (retain, nonatomic) TingMVTextureUpdateListenerApi *listener;
@property (retain, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSString *listenId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getMVTextureInfo;
- (void)releaseTexture;
- (id)initWithTextureRegistry:(id)a0 listener:(id)a1 taskId:(id)a2 listenId:(id)a3;
- (void)onTextureUnregistered:(id)a0;
- (struct __CVBuffer { } *)copyPixelBuffer;
- (void)flowPlayer:(id)a0 tingItem:(id)a1 onDisplayElementFrameBufferOut:(id)a2;
- (void).cxx_destruct;

@end
