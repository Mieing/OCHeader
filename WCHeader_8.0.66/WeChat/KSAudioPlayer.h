@class NSString, KSAudioStreamPlayBackItem, KSSongInfo, NSObject, KSNewAudioPlayerManager;
@protocol OS_dispatch_queue, KSAudioPlayerDelegate, KSAudioPlayerUserDefineProtocol;

@interface KSAudioPlayer : NSObject <KSAudioPlayerProtocol> {
    id<KSAudioPlayerUserDefineProtocol> _userProtocol;
    KSSongInfo *_curSong;
    float _volume;
    float _playRate;
}

@property (nonatomic) KSNewAudioPlayerManager *audioManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *audioQueue;
@property (retain) KSAudioStreamPlayBackItem *playerItem;
@property (nonatomic) BOOL seekToPlayAuto;
@property (nonatomic) float volume;
@property (nonatomic) float playRate;
@property (readonly, nonatomic) KSSongInfo *curSong;
@property (weak, nonatomic) id<KSAudioPlayerDelegate> delegate;
@property (readonly, nonatomic) unsigned long long status;
@property (nonatomic) BOOL manualProcessInterrup;
@property (nonatomic) BOOL pauseOnHeadPhoneOut;
@property (readonly, nonatomic) double curTime;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double cacheProgress;
@property (readonly, nonatomic) unsigned int secondCacheCnt;
@property (readonly, nonatomic) double playTimeWithNoPause;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithUserProtocol:(id)a0 queue:(id)a1;
- (void)dealloc;
- (double)firstBufTime;
- (id)dataProviderDetail;
- (id)errDetail;
- (unsigned long long)errType;
- (BOOL)play:(id)a0;
- (BOOL)play:(id)a0 seekTime:(double)a1;
- (void)stop;
- (void)pause;
- (void)resume;
- (void)seek:(double)a0;
- (BOOL)seekSync:(double)a0;
- (id)createDataProvider:(id)a0;
- (BOOL)pauseInner:(BOOL)a0;
- (BOOL)pauseSync;
- (void)pausePlayAndDownloadData;
- (BOOL)resumeInner:(BOOL)a0;
- (BOOL)resumeSync;
- (BOOL)bAudioSessionActive;
- (id)getAudioProcessor:(id)a0;
- (BOOL)isPlaying;
- (BOOL)isRealPlaying;
- (BOOL)isPause;
- (BOOL)isSeeking;
- (BOOL)isPlayStop;
- (void)audioPlayer:(id)a0 status:(unsigned long long)a1 params:(id)a2;
- (void)audioPlayer:(id)a0 dataBuffering:(double)a1;
- (void).cxx_destruct;

@end
