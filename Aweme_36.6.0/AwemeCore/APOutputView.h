@class NSString;
@protocol MTLTexture;

@interface APOutputView : UIView <AVViewBackgroundProtocol> {
    struct Mutex { struct { char opaque[64]; } mutex; } mMutex;
    struct __CVBuffer { } *_bufferRef;
    id<MTLTexture> _outputTexture1;
    id<MTLTexture> _outputTexture2;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct __CVBuffer { } *)getFrame;
- (void)avViewDidBecomeActive;
- (void)onFrame:(struct __CVBuffer { } *)a0 outputTexture1:(id)a1 outputTexture2:(id)a2;
- (int)startWithRender:(void *)a0;
- (void)avViewDidEnterBackground:(BOOL)a0;
- (BOOL)isAvaild;
- (void).cxx_destruct;
- (void)stop;
- (id).cxx_construct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
