@class NSString, UIView;
@protocol FlutterTextureRegistry;

@interface NewLifeDetailShareViewAnimationNormalViewWrapper : NSObject <NewLifeDetailShareViewAnimationProtocol, FlutterTexture>

@property (weak, nonatomic) UIView *hostView;
@property (weak, nonatomic) id<FlutterTextureRegistry> textureRegistry;
@property (nonatomic) long long textureId;
@property (nonatomic) struct __CVBuffer { } *cvPixelBufferRef;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithView:(id)a0;
- (void)bindFlutterTextureRegistry:(id)a0;
- (void)showView;
- (void)hideView;
- (struct __CVBuffer { } *)copyPixelBuffer;
- (void)releaeRes;
- (void).cxx_destruct;

@end
