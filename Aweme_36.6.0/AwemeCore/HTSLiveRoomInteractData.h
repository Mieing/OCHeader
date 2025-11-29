@class HTSLivePublicScreenSpeedConf, HTSLiveInputDefaultConfig, HTSLiveUserWorldChatInfo, RoomIntroLabel, HTSLiveLowPcuGuideData, HTSLiveFeaturedPublicScreenConf, HTSLiveEpisodeExtraInfo;

@interface HTSLiveRoomInteractData : IESLivePBBaseMessage

@property (nonatomic) long long landscapeCommentStyle;
@property (retain, nonatomic) HTSLiveEpisodeExtraInfo *vsComponentExtra;
@property (nonatomic) BOOL hasVsComponentExtra;
@property (retain, nonatomic) HTSLiveFeaturedPublicScreenConf *featuredPublicScreenData;
@property (nonatomic) BOOL hasFeaturedPublicScreenData;
@property (retain, nonatomic) HTSLivePublicScreenSpeedConf *publicScreenSpeedConf;
@property (nonatomic) BOOL hasPublicScreenSpeedConf;
@property (retain, nonatomic) RoomIntroLabel *publicRoomIntroLabel;
@property (nonatomic) BOOL hasPublicRoomIntroLabel;
@property (retain, nonatomic) HTSLiveInputDefaultConfig *inputDefaultConfig;
@property (nonatomic) BOOL hasInputDefaultConfig;
@property (retain, nonatomic) HTSLiveLowPcuGuideData *lowPcuGuideInfo;
@property (nonatomic) BOOL hasLowPcuGuideInfo;
@property (retain, nonatomic) HTSLiveUserWorldChatInfo *userWorldChatInfo;
@property (nonatomic) BOOL hasUserWorldChatInfo;

+ (id)descriptor;

@end
