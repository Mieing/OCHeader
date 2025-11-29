@class NSString, ByteRTCEngine;

@interface IESLiveInteractRTCMixAudioEngine : NSObject <ByteRTCMediaPlayerEventHandler> {
    struct unique_ptr<avframework::FFmpegAudioResampler, std::default_delete<avframework::FFmpegAudioResampler>> { struct FFmpegAudioResampler *__ptr_; } _audioResampler;
}

@property (retain, nonatomic) ByteRTCEngine *rtcEngine;
@property (nonatomic) BOOL shouldPushEmptyData;
@property (nonatomic) BOOL audioMixingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)__initialAudioStreamProcessor:(long long)a0 chaneNum:(long long)a1;
- (id)initWithRTCEngine:(id)a0;
- (void)enableAudioMixing:(long long)a0;
- (void)disableAudioMixing:(long long)a0;
- (void)setAudioMixingVolume:(long long)a0 volume:(int)a1;
- (void)pushAudioMixingStreamData:(float **)a0 samples:(long long)a1 sampleRate:(long long)a2 channels:(long long)a3 mixID:(long long)a4;
- (void)pushEmptyDataIfNeededWithSampleRate:(long long)a0 channels:(long long)a1 mixID:(long long)a2;
- (void)onMediaPlayerEvent:(int)a0 event:(long long)a1 message:(id)a2;
- (void)onMediaPlayerPlayingProgress:(int)a0 progress:(long long)a1;
- (void)onMediaPlayerStateChanged:(int)a0 state:(long long)a1 error:(long long)a2;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
