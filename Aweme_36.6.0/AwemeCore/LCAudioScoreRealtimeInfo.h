@class NSString;

@interface LCAudioScoreRealtimeInfo : NSObject <IESLiveKTVAudioScoreInfo>

@property (nonatomic) double sentenceScore;
@property (nonatomic) double songScore;
@property (nonatomic) double userPitch;
@property (nonatomic) int userNote;
@property (nonatomic) int userCent;
@property (nonatomic) int userOctave;
@property (nonatomic) double userFrequency;
@property (nonatomic) double refPitch;
@property (nonatomic) int refNote;
@property (nonatomic) int refCent;
@property (nonatomic) double refFrequency;
@property (nonatomic) int sentenceIndex;
@property (nonatomic) double timeMilliseconds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double sentenceScore;
@property (nonatomic) double songScore;
@property (nonatomic) double userPitch;
@property (nonatomic) int userNote;
@property (nonatomic) int userCent;
@property (nonatomic) int userOctave;
@property (nonatomic) double userFrequency;
@property (nonatomic) double refPitch;
@property (nonatomic) int refNote;
@property (nonatomic) int refCent;
@property (nonatomic) double refFrequency;
@property (nonatomic) int sentenceIndex;
@property (nonatomic) double timeMilliseconds;


@end
