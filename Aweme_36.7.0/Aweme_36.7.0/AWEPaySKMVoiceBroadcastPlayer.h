@class AVAudioPlayer, NSArray, NSDictionary, NSString, AVAssetExportSession, NSObject;
@protocol OS_dispatch_queue, AWEPaySKMVoiceBroadcastPlayerDelegate;

@interface AWEPaySKMVoiceBroadcastPlayer : NSObject <AVAudioPlayerDelegate>

@property (retain, nonatomic) AVAudioPlayer *audioPlayer;
@property (retain, nonatomic) NSDictionary *audioUrlMap;
@property (retain, nonatomic) NSArray *upperNumber;
@property (retain, nonatomic) NSArray *upperMonetaryUnit;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) AVAssetExportSession *curSession;
@property (weak, nonatomic) id<AWEPaySKMVoiceBroadcastPlayerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)toNumber:(id)a0;
- (void)playWithData:(id)a0 amountStr:(id)a1;
- (void)playWithAmountStr:(id)a0;
- (id)numberToMoney:(id)a0;
- (id)getAudioUrls:(id)a0;
- (void)mergeAVAssetWithSourceURLs:(id)a0 completed:(id /* block */)a1;
- (id)toMoney:(id)a0;
- (void)playWithAudioTask:(id)a0;
- (void).cxx_destruct;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (void)audioPlayerDecodeErrorDidOccur:(id)a0 error:(id)a1;

@end
