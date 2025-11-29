@class NSString, TXCMetalContext, TXCMetalDisplayConfig;
@protocol TXCMetalRenderer;

@interface TXCMetalRenderer : NSObject <TXCMetalRenderer> {
    id<TXCMetalRenderer> _rendererImpl;
    TXCMetalContext *_context;
    TXCMetalDisplayConfig *_displayConfig;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (unsigned long long)convertFormatToRenderType:(unsigned int)a0;
- (unsigned long long)convertTextureFormatToRenderType:(unsigned long long)a0;
- (unsigned long long)convertNativeFormatToRenderType:(int)a0;
- (void)updateRenderWithRenderTypeIfNeed:(unsigned long long)a0;
- (void)uploadNativePixelFrame:(const struct NativePixelFrame { void /* function */ **x0; } *)a0;
- (id)drawToTarget:(id)a0 coordinate:(id)a1;
- (id)drawMetalTexture:(id)a0 toTarget:(id)a1 coordinate:(id)a2;
- (unsigned long long)rendererType;
- (void)setDisplayConfig:(id)a0;
- (void).cxx_destruct;

@end
