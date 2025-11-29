@interface OMJCamSink : NSObject {
    struct SharedPtr<XMFFrameCreatorApple> { struct XMFFrameCreatorApple *_ptr; } _frameCreator;
}

@property (nonatomic) struct SharedPtr<XMJCamSession> { struct XMJCamSession *_ptr; } backingSession;
@property (readonly, nonatomic) BOOL isReady;

- (id)initWithBackingSession:(const void *)a0;
- (void)clearBackingSession;
- (struct SharedPtr<XMFVideoFrame> { struct XMFVideoFrame *x0; })createImageFrameWithVideoSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 clockwiseRotation:(int)a1 isMirrored:(BOOL)a2;
- (void)sendVideoSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 clockwiseRotation:(int)a1 isMirrored:(BOOL)a2;
- (void)sendVideoSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 clockwiseRotation:(int)a1;
- (void)sendAudioSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
