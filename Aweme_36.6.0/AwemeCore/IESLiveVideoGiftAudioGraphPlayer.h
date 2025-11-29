@class IESLiveVideoGiftAudioVoice, IESLiveVideoGiftAudioDecoder, IESLiveVideoGiftAudioDemuxer, NSURL, NSString;
@protocol IESLiveVideoGiftAudioPlayerDelegate;

@interface IESLiveVideoGiftAudioGraphPlayer : NSObject <IESLiveVideoGiftAudioPlayerProtocol>

@property (nonatomic) BOOL hasPrepared;
@property (nonatomic) long long status;
@property (nonatomic) long long audioPlaybackType;
@property (nonatomic) long long audioBufferSize;
@property (nonatomic) BOOL hasOccurredError;
@property (retain, nonatomic) IESLiveVideoGiftAudioDecoder *decoder;
@property (retain, nonatomic) IESLiveVideoGiftAudioDemuxer *demuxer;
@property (retain, nonatomic) IESLiveVideoGiftAudioVoice *voice;
@property (retain, nonatomic) NSURL *sourceURL;
@property (weak, nonatomic) id<IESLiveVideoGiftAudioPlayerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithConfiguration:(id)a0 error:(id *)a1;
- (void)didOccurError:(id)a0;
- (id)initWithConfiguration:(id)a0 url:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (void)setVolume:(double)a0;
- (void)seekToTime:(double)a0;
- (void)dealloc;

@end
