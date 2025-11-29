@class NSString, OMJMusicInfo;

@interface MJLocalMusicInfo : NSObject <MMBGMSelectedMusicDataProtocol> {
    NSString *_queryWord;
    long long _musicPosIndex;
}

@property (retain, nonatomic) OMJMusicInfo *musicInfo;
@property (retain, nonatomic) NSString *musicFilePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMusicInfo:(id)a0 musicFilePath:(id)a1;
- (id)musicId;
- (id)coverUrl;
- (id)songName;
- (id)songAuthorName;
- (unsigned long long)songDurationInMs;
- (id)musicUrl;
- (BOOL)playable;
- (BOOL)isMusicLiked;
- (BOOL)isFaved;
- (BOOL)favableAndRecentAble;
- (id)musicLyricInfos;
- (BOOL)isEqualToMusicData:(id)a0;
- (id)queryWord;
- (void)setQueryWord:(id)a0;
- (long long)musicPosIndex;
- (void)setMusicPosIndex:(long long)a0;
- (void).cxx_destruct;

@end
