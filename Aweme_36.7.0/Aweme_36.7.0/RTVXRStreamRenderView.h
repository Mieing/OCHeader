@class ByteRTCRemoteStreamKey, ByteRTCVideoFrameInfo, NSString, AVSampleBufferDisplayLayer;
@protocol RTVXRStreamRenderViewDelegate, RxInjector;

@interface RTVXRStreamRenderView : UIView <ByteRTCVideoSinkDelegate>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (retain, nonatomic) ByteRTCRemoteStreamKey *remoteStreamKey;
@property (retain, nonatomic) ByteRTCVideoFrameInfo *firstRemoteVideoFrameInfo;
@property (nonatomic) long long videoRotation;
@property (retain, nonatomic) AVSampleBufferDisplayLayer *sampleBufferDisplayLayer;
@property (weak, nonatomic) id<RTVXRStreamRenderViewDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *roomID;
@property (readonly, copy, nonatomic) NSString *uid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)setupForView:(id)a0 roomID:(id)a1 uid:(id)a2;
+ (struct __CVBuffer { } *)convertToIOSurfaceBackedPixelBuffer:(struct __CVBuffer { } *)a0;
+ (void)hiddenIfNeedWithView:(id)a0;

- (void)addNotification;
- (void)onFirstRemoteVideoFrameDecodedWithFrameInfo:(id)a0;
- (void)__refreshSampleLayerLayout;
- (void)onSampleBufferDisplayLayerReadyForDisplayDidChange:(id)a0;
- (void)__didRenderPixelBuffer;
- (id)initWithRoomID:(id)a0 uid:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)__prepareForReuseWithRoomID:(id)a0 userID:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })__videoRenderLayerFrame;
- (double)__videoRenderLayerRotationAngle;
- (void)__displayPixelBufferIOSurface:(struct __CVBuffer { } *)a0;
- (void)__displayPixelBuffer:(struct __CVBuffer { } *)a0;
- (struct opaqueCMSampleBuffer { } *)__createSampleBufferWithPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)createByteRTCRemoteStreamKey;
- (void)onFrame:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
