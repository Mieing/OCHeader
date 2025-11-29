@class NSString;

@interface FinderMusicStatisticsInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long songCnt;
@property (nonatomic) unsigned long long totalSongPlayNum;
@property (retain, nonatomic) NSString *creatorPageUrl;
@property (nonatomic) unsigned long long friendsLikeCnt;
@property (nonatomic) unsigned long long peopleLikeCnt;

+ (void)initialize;

- (void)setPeopleLikeCnt:(unsigned long long)a0;
- (unsigned long long)peopleLikeCnt;
- (void)setFriendsLikeCnt:(unsigned long long)a0;
- (unsigned long long)friendsLikeCnt;
- (void)setCreatorPageUrl:(id)a0;
- (id)creatorPageUrl;
- (void)setTotalSongPlayNum:(unsigned long long)a0;
- (unsigned long long)totalSongPlayNum;
- (void)setSongCnt:(unsigned long long)a0;
- (unsigned long long)songCnt;

@end
