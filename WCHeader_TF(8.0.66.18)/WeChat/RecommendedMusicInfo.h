@class NSString, NSMutableArray;

@interface RecommendedMusicInfo : WXPBGeneratedMessage <MMBGMSelectedMusicDataProtocol, EditVideoBGMPlayerData, MMBGMDataReport>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *queryWord;
@property (nonatomic) long long musicPosIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned int musicSid;
@property (nonatomic) float emotionScore;
@property (nonatomic) float tempoScore;
@property (retain, nonatomic) NSString *musicUrl;
@property (retain, nonatomic) NSMutableArray *colorList;
@property (retain, nonatomic) NSString *songName;
@property (retain, nonatomic) NSMutableArray *singerName;
@property (retain, nonatomic) NSMutableArray *lyrics;
@property (retain, nonatomic) NSString *picUrl;
@property (retain, nonatomic) NSString *playUrl;
@property (retain, nonatomic) NSMutableArray *hitInfo;
@property (nonatomic) unsigned int fid;
@property (nonatomic) unsigned int duration;
@property (nonatomic) unsigned int showLyric;
@property (retain, nonatomic) NSString *recommendDesc;
@property (nonatomic) unsigned int musicType;
@property (nonatomic) unsigned long long listenId;
@property (nonatomic) BOOL containFullVer;
@property (retain, nonatomic) NSString *fullMusicUrl;
@property (retain, nonatomic) NSString *fullLyric;
@property (nonatomic) unsigned int fullDuration;
@property (nonatomic) int isLike;
@property (retain, nonatomic) NSString *miaojianMusicId;

+ (void)initialize;

- (unsigned long long)finderMusicId;
- (int)finderMusicType;
- (id)musicId;
- (id)coverUrl;
- (id)songAuthorName;
- (unsigned long long)songDurationInMs;
- (BOOL)playable;
- (BOOL)isMusicLiked;
- (BOOL)isFaved;
- (BOOL)favableAndRecentAble;
- (id)musicLyricInfos;
- (BOOL)isEqualToMusicData:(id)a0;
- (id)uniqueId;
- (void)setMusicReportType:(unsigned long long)a0;
- (unsigned long long)musicReportType;

@end
