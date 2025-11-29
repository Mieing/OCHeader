@class NSURL, NSString;
@protocol IESLiveVideoGiftAudioPlayerDelegate;

@interface IESLiveOutAuxStreamAudioFilePlayer : NSObject <IESLiveVideoGiftAudioPlayerProtocol>

@property (retain, nonatomic) NSURL *url;
@property (nonatomic) int auxAudioStreamID;
@property (nonatomic) long long status;
@property (nonatomic) double auxStreamVolume;
@property (weak, nonatomic) id<IESLiveVideoGiftAudioPlayerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfiguration:(id)a0 url:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (void)setVolume:(double)a0;
- (void)seekToTime:(double)a0;
- (void)dealloc;

@end
