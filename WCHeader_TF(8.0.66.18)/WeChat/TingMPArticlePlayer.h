@class NSString, WCAudioPlayer, MMListenTTSInfo;

@interface TingMPArticlePlayer : TingAudioPlayer <IWCAudioPlayerExt>

@property (retain, nonatomic) WCAudioPlayer *player;
@property (retain, nonatomic) MMListenTTSInfo *ttsInfo;
@property (nonatomic) long long remainedErrorRetryCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTingItem:(id)a0 configuartion:(id)a1;
- (void)prepareToPlay;
- (BOOL)canRetry;
- (BOOL)isHLS;
- (id)audioInfo;
- (BOOL)isPlayRateSupported;
- (void)setPlayRate:(float)a0;
- (double)duration;
- (void).cxx_destruct;

@end
