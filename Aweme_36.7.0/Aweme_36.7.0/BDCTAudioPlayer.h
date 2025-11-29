@class AVAudioPlayer, NSString, CADisplayLink, NSObject;
@protocol OS_dispatch_queue, BDCTAudioPlayerDelegate;

@interface BDCTAudioPlayer : NSObject <AVAudioPlayerDelegate>

@property (retain, nonatomic) AVAudioPlayer *audioPlayer;
@property (copy, nonatomic) NSString *playingURLString;
@property (nonatomic) unsigned long long audioPlayerState;
@property (copy, nonatomic) id /* block */ executationBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *audioPlayerQueue;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (weak, nonatomic) id<BDCTAudioPlayerDelegate> audioPlayerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)audioFrameUpdate;
- (void)playAudioWithFilePath:(id)a0;
- (void)playAudioWithFileURL:(id)a0;
- (void)stopAudioPlayer;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)stopDisplayLink;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;

@end
