@class MMListenMembershipInfo, MMListenUserPageResponse_DJChatRoomShowInfo, MMListenMusicBaseResponse, MMListenUserPageResponse_BindFinderUserInfo, MMListenMembershipJoinInfo, NSMutableArray, BaseResponse;

@interface MMListenUserPageResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *sections;
@property (retain, nonatomic) NSMutableArray *playerSections;
@property (nonatomic) unsigned long long timeListen;
@property (nonatomic) int audioPublishCount;
@property (nonatomic) BOOL showAudioPublish;
@property (retain, nonatomic) MMListenUserPageResponse_BindFinderUserInfo *bindFinderUserInfo;
@property (retain, nonatomic) MMListenMembershipJoinInfo *adFreeListen;
@property (retain, nonatomic) MMListenMembershipInfo *qqmusicMembership;
@property (retain, nonatomic) MMListenMembershipJoinInfo *qqmusicMembershipJoin;
@property (retain, nonatomic) NSMutableArray *musicTabs;
@property (retain, nonatomic) MMListenMusicBaseResponse *musicBaseResponse;
@property (nonatomic) BOOL openUserpageNotificationList;
@property (nonatomic) BOOL openUserpageMessageList;
@property (retain, nonatomic) MMListenUserPageResponse_DJChatRoomShowInfo *djChatRoomShowInfo;

+ (void)initialize;

@end
