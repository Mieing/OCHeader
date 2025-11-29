@class NSString;

@interface LiveSEIKTVState : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *songId;
@property (retain, nonatomic) NSString *uniqueId;
@property (retain, nonatomic) NSString *singerUserId;
@property (retain, nonatomic) NSString *songName;
@property (nonatomic) BOOL useVideo;
@property (nonatomic) int singState;
@property (nonatomic) int totalScore;
@property (retain, nonatomic) NSString *scoreLevel;
@property (nonatomic) BOOL pause;
@property (nonatomic) BOOL disableScoreAdjust;
@property (nonatomic) int realTimeScore;
@property (retain, nonatomic) NSString *nextSongName;
@property (nonatomic) int sentenceIndex;
@property (nonatomic) BOOL interrupt;
@property (nonatomic) int us;
@property (nonatomic) int wonderfulPositionJumped;
@property (nonatomic) int singMode;
@property (nonatomic) int majorBgmChannel;
@property (nonatomic) int majorBgmVolume;
@property (nonatomic) float majorBgmPitch;
@property (nonatomic) int wonderfulPositionEnd;
@property (nonatomic) BOOL onlySingSegment;
@property (retain, nonatomic) NSString *nextSongUniqueId;

+ (void)initialize;

@end
