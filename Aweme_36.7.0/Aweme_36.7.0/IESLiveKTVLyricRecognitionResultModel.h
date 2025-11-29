@class NSString, NSArray;

@interface IESLiveKTVLyricRecognitionResultModel : NSObject

@property (nonatomic) int state;
@property (nonatomic) float score;
@property (nonatomic) float matchStartTime;
@property (nonatomic) float matchEndTime;
@property (nonatomic) float matchDuration;
@property (retain, nonatomic) NSString *author;
@property (retain, nonatomic) NSString *songName;
@property (nonatomic) float fullDuration;
@property (nonatomic) int lyricType;
@property (retain, nonatomic) NSArray *urls;
@property (nonatomic) long long songID;
@property (nonatomic) float requestStartTS;
@property (nonatomic) float requestDuration;
@property (nonatomic) double musicClimaxStartTime;
@property (nonatomic) double musicClimaxDurationTime;
@property (nonatomic) BOOL refrain;
@property (nonatomic) long long fingerType;
@property (copy, nonatomic) NSString *taggingInfo;
@property (copy, nonatomic) NSString *singerLinkmicId;
@property (nonatomic) long long simGroupID;
@property (nonatomic) long long sameGroupID;
@property (copy, nonatomic) NSString *fontInfo;

- (id)initWithCombinedRecognitionResponse:(id)a0;
- (id)initWithRes:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
