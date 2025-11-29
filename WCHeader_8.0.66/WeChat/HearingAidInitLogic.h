@class HearingAidRecorderLogic, NSMutableArray;

@interface HearingAidInitLogic : NSObject

@property (copy, nonatomic) id /* block */ prepareCallback;
@property (retain, nonatomic) HearingAidRecorderLogic *recorder;
@property (nonatomic) struct IWaveAudioHAidInterface { void /* function */ **x0; } *waveAudioHAidInterface;
@property (retain, nonatomic) NSMutableArray *soundDB;
@property (retain, nonatomic) NSMutableArray *avgsoundDBList;
@property (nonatomic) unsigned long long returnIsQuietTime;
@property (nonatomic) unsigned long long returnAvgDBTime;
@property (nonatomic) BOOL isAudioInterrupted;

- (id)init;
- (void)startPrepare:(id /* block */)a0;
- (void).cxx_destruct;

@end
