@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, MMFinderReplayKitVideoDecoderDelegate;

@interface MMFinderReplayKitVideoDecoder : NSObject

@property (readonly, nonatomic) BOOL isHevc;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) struct OpaqueVTDecompressionSession { } *session;
@property (nonatomic) struct opaqueCMFormatDescription { } *formatDesc;
@property (readonly, nonatomic) NSMutableDictionary *parameterSets;
@property (weak, nonatomic) id<MMFinderReplayKitVideoDecoderDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (void)processVideoFrame:(id)a0 compleBlock:(id /* block */)a1;
- (void)resetDecoderOnComplete:(id /* block */)a0;
- (void)notifyError:(id)a0 forFrame:(id)a1 withComplete:(id /* block */)a2;
- (BOOL)checkToRecreateDecoder:(id)a0 bitDeth:(long long)a1 videoFullRangeFlag:(long long)a2;
- (BOOL)createDecoderWithBitDeth:(long long)a0 videoFullRangeFlag:(long long)a1;
- (void)releaseDecoder;
- (BOOL)updateParameterSets:(id)a0;
- (BOOL)createFormatDesc;
- (void)decodeEncodedFrame:(id)a0 parsedNalus:(id)a1 onComplete:(id /* block */)a2;
- (void)sendImgToLive:(struct __CVBuffer { } *)a0 videoFrameId:(long long)a1;
- (struct opaqueCMSampleBuffer { } *)avccBufferFromEncodedNals:(id)a0 format:(struct opaqueCMFormatDescription { } *)a1 pts:(unsigned long long)a2;
- (void).cxx_destruct;

@end
