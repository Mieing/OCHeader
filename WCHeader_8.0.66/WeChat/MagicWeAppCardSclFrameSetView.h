@class WANativeViewTexture, NSString, MBExternalViewStub;

@interface MagicWeAppCardSclFrameSetView : MagicSclFrameSetView <WANativeViewTextureInterface>

@property (weak, nonatomic) MBExternalViewStub *mbView;
@property (nonatomic) BOOL nativeViewUseTexture;
@property (retain) WANativeViewTexture *nativeViewTexture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init:(id)a0 bizName:(id)a1;
- (void)onPixelBufferCallBack:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1;
- (void)handleNativeViewPointerEvent:(id)a0;
- (void)setMBExternalViewStub:(id)a0;
- (void).cxx_destruct;

@end
