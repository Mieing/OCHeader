@class NSMutableArray, MMListenCategoryItem, MMListenJumpInfo, MMListenUserInfo, NSString, MMListenMusicChatRoomInfo_Announcement, MMListenMusicChatRoomInfo_PlayingItemInfo;

@interface MMListenMusicChatRoomInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int listenedCount;
@property (nonatomic) unsigned int unlistenCount;
@property (retain, nonatomic) MMListenMusicChatRoomInfo_PlayingItemInfo *playingItemInfo;
@property (retain, nonatomic) MMListenCategoryItem *playlist;
@property (retain, nonatomic) MMListenCategoryItem *recommendPlaylist;
@property (nonatomic) unsigned int songTotalCount;
@property (retain, nonatomic) MMListenJumpInfo *feedbackJumpInfo;
@property (nonatomic) int type;
@property (retain, nonatomic) MMListenUserInfo *creatorUserInfo;
@property (retain, nonatomic) MMListenCategoryItem *audienceWantPlaylist;
@property (retain, nonatomic) MMListenCategoryItem *myWantPlaylist;
@property (retain, nonatomic) MMListenMusicChatRoomInfo_Announcement *announcement;
@property (nonatomic) unsigned long long thumbUpCount;
@property (nonatomic) BOOL isClose;
@property (retain, nonatomic) NSString *announcementRecommendCategoryId;
@property (nonatomic) unsigned int onlineCount;
@property (retain, nonatomic) MMListenJumpInfo *announcementFeedbackJumpInfo;
@property (retain, nonatomic) NSMutableArray *topAnnouncementList;
@property (nonatomic) unsigned int creatorStatus;
@property (retain, nonatomic) MMListenMusicChatRoomInfo_PlayingItemInfo *playingHistoryItem;

+ (void)initialize;

@end
