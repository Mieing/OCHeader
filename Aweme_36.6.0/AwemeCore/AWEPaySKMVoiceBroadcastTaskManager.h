@class NSString, AWEPaySKMVoiceBroadcastTask, AWEPaySKMVoiceBroadcastPlayer, NSMutableArray;

@interface AWEPaySKMVoiceBroadcastTaskManager : NSObject <AWEPaySKMVoiceBroadcastPlayerDelegate>

@property (retain, nonatomic) AWEPaySKMVoiceBroadcastPlayer *voicePlayer;
@property (retain, nonatomic) NSMutableArray *taskQueue;
@property (nonatomic) BOOL isBroadcasting;
@property (retain, nonatomic) AWEPaySKMVoiceBroadcastTask *currentTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playAudioWithAmountStr:(id)a0 audioUrl:(id)a1;
- (void)playAudioWithAmountStr:(id)a0 audioUrl:(id)a1 completion:(id /* block */)a2;
- (void)audioPlayerDidFinishPlayingTask:(BOOL)a0;
- (void)addAudioTask:(id)a0;
- (void).cxx_destruct;

@end
