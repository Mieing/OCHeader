@class NSString, MMListenSimplePlayableInfo, NSMutableArray;

@interface MMListenVideoBgmItem : WXPBGeneratedMessage <MMBGMSelectedMusicDataProtocol, MMBGMDataReport>

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
@property (retain, nonatomic) MMListenSimplePlayableInfo *playableInfo;
@property (nonatomic) int playable;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned long long mirBegin;
@property (nonatomic) unsigned long long mirEnd;
@property (retain, nonatomic) NSString *lyric;
@property (nonatomic) unsigned int musicSid;
@property (nonatomic) float emotionScore;
@property (nonatomic) float tempoScore;
@property (retain, nonatomic) NSMutableArray *colorList;
@property (retain, nonatomic) NSMutableArray *hitInfo;
@property (nonatomic) unsigned int fid;
@property (retain, nonatomic) NSString *recommendDesc;
@property (nonatomic) unsigned int musicType;
@property (retain, nonatomic) NSString *recommendBuf;

+ (void)initialize;

- (id)musicUrl;
- (unsigned long long)musicStartTimeInMs;
- (unsigned long long)songDurationInMs;
- (id)musicId;
- (id)coverUrl;
- (id)songName;
- (id)songAuthorName;
- (BOOL)isMusicLiked;
- (BOOL)isFaved;
- (BOOL)favableAndRecentAble;
- (id)musicLyricInfos;
- (BOOL)isEqualToMusicData:(id)a0;
- (id)feedId;
- (id)uniqueId;
- (int)bgmItemType;
- (void)setMusicReportType:(unsigned long long)a0;
- (unsigned long long)musicReportType;

@end
