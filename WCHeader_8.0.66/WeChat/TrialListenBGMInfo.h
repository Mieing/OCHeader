@class NSString;

@interface TrialListenBGMInfo : NSObject

@property (retain, nonatomic) NSString *trialMusicFilePath;
@property (nonatomic) long long duration;
@property (nonatomic) long long startTime;
@property (readonly, nonatomic) long long endTime;

+ (id)createTrialBGMInfoWithSong:(id)a0;

- (void).cxx_destruct;

@end
