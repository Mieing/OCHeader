@class FinderLiveBackgroundMusicInfo, FinderLiveNoticeInfo, FinderJumpInfo, SongListInfo, FinderLiveGamePlayTogether, FinderLiveQuestEntranceInfo, NSMutableArray, FinderLiveFanClubInfo, FinderContactLiveInfo;

@interface FinderLiveGetUserGameConfigResponse_GeneralCreateLivePrepareInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderLiveNoticeInfo *liveNoticeInfo;
@property (retain, nonatomic) NSMutableArray *visibilityFileList;
@property (nonatomic) unsigned int maxVisibleChatroomCount;
@property (nonatomic) unsigned int maxRedpacketChatroomCount;
@property (nonatomic) unsigned int redpacketChatroomSelectStatus;
@property (nonatomic) unsigned int maxVisibleUserCount;
@property (retain, nonatomic) FinderLiveBackgroundMusicInfo *bgMusicInfo;
@property (retain, nonatomic) FinderLiveQuestEntranceInfo *questEntranceInfo;
@property (nonatomic) unsigned int shoppingNotAvailable;
@property (nonatomic) unsigned long long liveFunctionSwitchFlags;
@property (retain, nonatomic) FinderContactLiveInfo *contactLiveInfo;
@property (retain, nonatomic) FinderLiveFanClubInfo *fanClubInfo;
@property (retain, nonatomic) SongListInfo *songListInfo;
@property (nonatomic) BOOL canShowPlayTogetherEntrance;
@property (retain, nonatomic) FinderLiveGamePlayTogether *playTogetherInfo;
@property (nonatomic) unsigned int liveGlobalFlag;
@property (retain, nonatomic) FinderJumpInfo *creatorCenterEntrance;
@property (nonatomic) BOOL showThreeDimensionalViewEntrance;
@property (retain, nonatomic) FinderJumpInfo *threeDimensionalViewEntrance;
@property (retain, nonatomic) FinderJumpInfo *creatorCenterEntranceV2;
@property (retain, nonatomic) FinderJumpInfo *playTogetherInfoJumpInfo;

+ (void)initialize;

@end
