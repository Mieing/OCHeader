@class NSLock, NSMutableDictionary, NSString;
@protocol BDCastMediaDecoderDelegate;

@interface BDCastMediaDecoder : NSObject {
    struct unique_ptr<MediaRender::MediaRenderEngine, std::default_delete<MediaRender::MediaRenderEngine>> { struct MediaRenderEngine *__ptr_; } _mediaRenderEngine;
}

@property (retain, nonatomic) NSMutableDictionary *intDic;
@property (retain, nonatomic) NSMutableDictionary *strDic;
@property (retain, nonatomic) NSLock *dicLock;
@property (nonatomic) int keyIndex;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } outputFormat;
@property (weak, nonatomic) id<BDCastMediaDecoderDelegate> delegate;
@property (nonatomic) long long logLevel;

- (void)handleInformationCallback:(int)a0 log:(id)a1 isLog:(BOOL)a2;
- (void)handleVideoSizeChangeWithIdentifier:(id)a0 userId:(int)a1 width:(int)a2 height:(int)a3 rotation:(int)a4;
- (void)handleVideoFrameCallBackWithIdentifier:(id)a0 userId:(int)a1 pixelBuffer:(struct __CVBuffer { } *)a2 pts:(unsigned long long)a3;
- (void)handleAudioFrameCallBackWithIdentifier:(id)a0 userId:(int)a1 buffer:(char *)a2 len:(int)a3 pts:(unsigned long long)a4;
- (void)handleAudioFormatCallBackWithIdentifier:(id)a0 userId:(int)a1 format:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a2;
- (int)MediaRenderLogLevelFrom:(long long)a0;
- (void)stopDecodeWithMideType:(unsigned long long)a0;
- (int)formatFormVideoFormat:(unsigned long long)a0;
- (int)getIntKeyWithString:(id)a0;
- (id)findStrValueWithKey:(int)a0;
- (long long)BDCastSinkLogLevelFrom:(int)a0;
- (id)initWithIdentifier:(id)a0 logLevel:(long long)a1;
- (void)setVideoParamWithUserId:(id)a0 fps:(int)a1 width:(int)a2 height:(int)a3 decodedVideoFormat:(unsigned long long)a4;
- (void)setAudioParamWithUserId:(id)a0 sampleRate:(int)a1 channels:(int)a2 bitWidth:(int)a3 frameSize:(int)a4;
- (void)sendData:(char *)a0 size:(unsigned long long)a1 userId:(id)a2 pts:(unsigned long long)a3 mediaType:(unsigned long long)a4;
- (BOOL)startDecodeWithUserId:(id)a0 mediaType:(unsigned long long)a1;
- (BOOL)stopDecodeWithUserId:(id)a0 mediaType:(unsigned long long)a1;
- (unsigned long long)statusWithUserId:(id)a0 mediaType:(unsigned long long)a1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;

@end
