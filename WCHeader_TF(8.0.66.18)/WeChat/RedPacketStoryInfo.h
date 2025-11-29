@class NSString, RedPacketStoryInfo_JumpDetail, CoverInfoDetail, EcsJumpInfo, NSMutableArray, RedPacketStoryInfo_WxappInfo;

@interface RedPacketStoryInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *logoUrl;
@property (retain, nonatomic) NSString *logoMd5;
@property (retain, nonatomic) NSString *description;
@property (retain, nonatomic) NSString *corpName;
@property (retain, nonatomic) NSMutableArray *detailList;
@property (nonatomic) unsigned int actionType;
@property (retain, nonatomic) NSString *actionUrl;
@property (retain, nonatomic) NSString *actionAppUsername;
@property (retain, nonatomic) NSString *actionAppNickname;
@property (retain, nonatomic) NSString *packetId;
@property (retain, nonatomic) CoverInfoDetail *coverInfo;
@property (retain, nonatomic) NSString *actionButtonText;
@property (nonatomic) unsigned int actionEmotionDesignerUin;
@property (nonatomic) unsigned int disableAutoPlay;
@property (nonatomic) unsigned int autoPlayDelayMs;
@property (retain, nonatomic) NSString *actionJumpText;
@property (retain, nonatomic) NSString *sameReceiveLink;
@property (retain, nonatomic) NSString *jointLabelText;
@property (retain, nonatomic) NSString *actionBeforeJumpText;
@property (retain, nonatomic) NSString *actionNormalIconUrl;
@property (retain, nonatomic) NSString *actionDarkIconUrl;
@property (nonatomic) unsigned int actionJumpNewlife;
@property (retain, nonatomic) RedPacketStoryInfo_WxappInfo *wxappInfo;
@property (retain, nonatomic) RedPacketStoryInfo_JumpDetail *outerJump;
@property (retain, nonatomic) EcsJumpInfo *ecsJumpInfo;

+ (void)initialize;

@end
