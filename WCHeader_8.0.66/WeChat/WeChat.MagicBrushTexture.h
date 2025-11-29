@interface WeChat.MagicBrushTexture : NSObject <FlutterTexture, IMBExternalTextureDelegate> {
    void /* unknown type, empty encoding */ registry;
    void /* unknown type, empty encoding */ view;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textureId;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ forceMaxFps;
    void /* unknown type, empty encoding */ workItem;
    void /* unknown type, empty encoding */ needSendTextureAvailable;
    void /* unknown type, empty encoding */ danger_control;
}

- (struct __CVBuffer { } *)copyPixelBuffer;
- (BOOL)setFlutterCanvasMaxFps:(BOOL)a0 duration:(int)a1;
- (id)init;
- (void).cxx_destruct;

@end
