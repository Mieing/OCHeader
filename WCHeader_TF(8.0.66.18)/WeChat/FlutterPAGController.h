@class PAGSurface, NSString, PAGFile, FlutterPAGInfo, PAGViewListenerApi, NSObject, FlutterPAGValueAnimator, PAGPlayer, NSNumber;
@protocol OS_dispatch_queue, FlutterTextureRegistry;

@interface FlutterPAGController : NSObject <FlutterTexture> {
    struct __CVBuffer { } *_lastPixelBuffer;
    NSNumber *_pagId;
    FlutterPAGInfo *_pagInfo;
    struct CGSize { double width; double height; } _size;
    PAGSurface *_pagSurface;
    PAGPlayer *_pagPlayer;
    long long _duration;
    int _repeatCount;
    NSObject<OS_dispatch_queue> *_pag_queue;
}

@property (retain, nonatomic) NSObject<FlutterTextureRegistry> *flutterTextureRegistry;
@property (nonatomic) double currentPlayFraction;
@property (nonatomic) long long textureId;
@property (retain, nonatomic) PAGFile *pagFile;
@property (retain, nonatomic) FlutterPAGValueAnimator *valueAnimator;
@property (nonatomic) BOOL isReleased;
@property (nonatomic) BOOL couldProduceFrame;
@property (retain, nonatomic) PAGViewListenerApi *pagViewListener;
@property (nonatomic) double playSpeed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setFlutterUpdatePath:(id)a0;

- (struct __CVBuffer { } *)copyPixelBuffer;
- (id)init:(id)a0 flutterTextureRegistry:(id)a1 binaryMessenger:(id)a2;
- (id)getTextureId;
- (void)setPAGSourceInfo:(id)a0;
- (void)setSizeWidth:(double)a0 height:(double)a1;
- (void)setSource:(id)a0;
- (void)setPagInfo:(id)a0;
- (void)startPlay;
- (void)startPlayImpl;
- (void)stopPlay:(BOOL)a0;
- (void)stopPlay;
- (void)resumePlay;
- (void)pausePlay;
- (void)setProgress:(double)a0;
- (void)setRepeatCount:(int)a0;
- (BOOL)replaceImageIndex:(long long)a0 path:(id)a1;
- (BOOL)replaceTextIndex:(long long)a0 text:(id)a1;
- (BOOL)setSolidColorName:(id)a0 color:(id)a1;
- (void)flush;
- (void)pagFlushWhenPause;
- (void)releaseAndFree;
- (void)free;
- (double)getProgress;
- (void)setPlayTimeMs:(long long)a0;
- (void)onAnimationStart;
- (void)onAnimationUpdate;
- (void)onAnimationEnd;
- (void)onAnimationCancel;
- (void)onAnimationRepeat;
- (void)updateView;
- (void)producePAGCVPixelBuffer;
- (BOOL)refreshPAGWithProgress:(double)a0;
- (struct __CVBuffer { } *)RBGBuffereCopyWithPixelBuffer:(struct __CVBuffer { } *)a0 pixelBufferDst:(struct __CVBuffer { } *)a1;
- (struct __CVBuffer { } *)RBGBufferCreate:(int)a0 bufferHeight:(int)a1;
- (void)dealloc;
- (void)onTextureUnregistered:(id)a0;
- (void).cxx_destruct;

@end
