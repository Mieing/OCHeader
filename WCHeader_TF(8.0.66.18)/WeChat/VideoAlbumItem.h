@class VideoAlbumItem_VideoInfo, NSString, VideoAlbumItem_GameInfo, VideoAlbumItem_UserBattleInfo, VideoAlbumItem_BattleInfo, VideoAlbumItem_VideoJumpInfo, NSMutableArray, VideoAlbumItem_ExternInfo, VideoAlbumItem_LeaderBoardInfo, VideoAlbumItem_MixTagInfo;

@interface VideoAlbumItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *videoId;
@property (nonatomic) unsigned long long createTime;
@property (retain, nonatomic) VideoAlbumItem_GameInfo *game;
@property (retain, nonatomic) VideoAlbumItem_VideoInfo *video;
@property (retain, nonatomic) NSMutableArray *tagList;
@property (retain, nonatomic) VideoAlbumItem_ExternInfo *externInfo;
@property (nonatomic) BOOL isOwner;
@property (retain, nonatomic) VideoAlbumItem_UserBattleInfo *ownerInfo;
@property (retain, nonatomic) NSMutableArray *wxfriendsTeamMateList;
@property (nonatomic) unsigned int sourceType;
@property (retain, nonatomic) NSString *feedbackUrl;
@property (nonatomic) unsigned int wonderfulVideoType;
@property (retain, nonatomic) NSString *feedUrl;
@property (retain, nonatomic) VideoAlbumItem_MixTagInfo *mixTagInfo;
@property (retain, nonatomic) NSMutableArray *feedTagList;
@property (nonatomic) BOOL isNew;
@property (nonatomic) unsigned int userVideoType;
@property (retain, nonatomic) VideoAlbumItem_BattleInfo *battleInfo;
@property (retain, nonatomic) VideoAlbumItem_LeaderBoardInfo *leaderboardInfo;
@property (nonatomic) BOOL isOnBoard;
@property (nonatomic) BOOL isPublish;
@property (nonatomic) BOOL isSaveCloud;
@property (retain, nonatomic) VideoAlbumItem_VideoJumpInfo *jumpInfo;

+ (void)initialize;

@end
