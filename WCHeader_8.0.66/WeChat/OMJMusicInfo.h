@class NSString, NSArray;

@interface OMJMusicInfo : NSObject <WCFinderMusicSelectViewData, WCMJCameraMusicPlayableData, MMBGMSelectedMusicDataProtocol, MMBGMDataReport>

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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct shared_ptr<XMJMusicInfo> { struct XMJMusicInfo *__ptr_; struct __shared_weak_count *__cntrl_; } backingInfo;
@property (readonly, nonatomic) NSString *musicID;
@property (readonly, nonatomic) NSString *songName;
@property (readonly, nonatomic) NSString *singerName;
@property (readonly, nonatomic) NSString *coverImageURL;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (readonly, nonatomic) NSArray *lyricInfos;
@property (retain, nonatomic) NSString *externalMusicID;

+ (id)infoFromSelectedMusicData:(id)a0;
+ (id)convertMusicLyricInfos:(id)a0;

- (id)displayTitle;
- (id)musicId;
- (id)coverUrl;
- (id)songAuthorName;
- (unsigned long long)songDurationInMs;
- (id)musicUrl;
- (BOOL)playable;
- (BOOL)isMusicLiked;
- (id)musicLyricInfos;
- (BOOL)isEqualToMusicData:(id)a0;
- (BOOL)isFaved;
- (BOOL)favableAndRecentAble;
- (BOOL)isFav;
- (void)setIsFav:(BOOL)a0;
- (void)setRecommendBuf:(id)a0;
- (id)recommendBuf;
- (void)setFeedId:(id)a0;
- (id)feedId;
- (void)setBgmItemType:(int)a0;
- (int)bgmItemType;
- (void)setMusicReportType:(unsigned long long)a0;
- (unsigned long long)musicReportType;
- (id)initWithMusicID:(id)a0 songName:(id)a1 singerName:(id)a2 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 lyricInfos:(id)a4;
- (id)initWithMusicID:(id)a0 songName:(id)a1 singerName:(id)a2 coverImageURL:(id)a3 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a5 lyricInfos:(id)a6;
- (id)initWithMusicID:(id)a0 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (id)initWithBackingInfo:(const void *)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
