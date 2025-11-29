@class NSString, MMListenVideoBgmItem, FinderObject;

@interface FinderBgmItem : WXPBGeneratedMessage <MMBGMDataReport, MMBGMSelectedMusicDataProtocol>

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
@property (retain, nonatomic) MMListenVideoBgmItem *listenItem;
@property (nonatomic) unsigned int itemType;
@property (retain, nonatomic) FinderObject *finderObj;
@property (nonatomic) BOOL isFav;

+ (void)initialize;

- (void)setMusicReportType:(unsigned long long)a0;
- (unsigned long long)musicReportType;
- (id)musicUrl;
- (unsigned long long)musicStartTimeInMs;
- (unsigned long long)songDurationInMs;
- (id)musicId;
- (id)coverUrl;
- (id)songName;
- (id)songAuthorName;
- (BOOL)playable;
- (BOOL)isMusicLiked;
- (BOOL)isFaved;
- (BOOL)favableAndRecentAble;
- (id)musicLyricInfos;
- (BOOL)isEqualToMusicData:(id)a0;
- (id)recommendBuf;
- (id)feedId;
- (id)uniqueId;
- (int)bgmItemType;

@end
