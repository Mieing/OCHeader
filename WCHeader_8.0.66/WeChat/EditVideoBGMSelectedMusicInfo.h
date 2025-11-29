@class NSString, RecommendedMusicInfo;

@interface EditVideoBGMSelectedMusicInfo : MMObject <NSCoding>

@property (nonatomic) long long requestId;
@property (nonatomic) long long musicIndex;
@property (retain, nonatomic) RecommendedMusicInfo *musicInfo;
@property (retain, nonatomic) NSString *musicFilePath;
@property (nonatomic) int isSearchMusic;
@property (nonatomic) int isFromMusicTag;
@property (retain, nonatomic) NSString *searchMusicTag;
@property (nonatomic) int isMusicOn;
@property (nonatomic) int isOriginSoundOn;

- (id)genBGMSelectedMusicResult;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)hasBgmMusic;
- (void).cxx_destruct;

@end
