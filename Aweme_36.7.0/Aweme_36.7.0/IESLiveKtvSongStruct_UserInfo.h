@class NSString, HTSLiveImage, IESLiveUserHighScoreSongTag;

@interface IESLiveKtvSongStruct_UserInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *id_p;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) HTSLiveImage *avatar;
@property (nonatomic) BOOL hasAvatar;
@property (copy, nonatomic) NSString *idStr;
@property (copy, nonatomic) NSString *highScoreSongCount;
@property (copy, nonatomic) NSString *ktvStageMicPosTagText;
@property (nonatomic) int ktvLyricText;
@property (copy, nonatomic) NSString *ktvComponentLyricTextFirstLine;
@property (nonatomic) int ktvComponentLyricTextSecondLine;
@property (retain, nonatomic) IESLiveUserHighScoreSongTag *highScoreSongTag;
@property (nonatomic) BOOL hasHighScoreSongTag;
@property (nonatomic) long long hitMidiRecordAb;
@property (nonatomic) double userMidiScore;
@property (nonatomic) BOOL isHighScoreSong;
@property (nonatomic) long long kSongUid;
@property (nonatomic) BOOL isSupportHighRiskHandleVersion;

+ (id)descriptor;

@end
