@class NSMutableArray, VoIPMPUserInfo;

@interface VoIPMPTalkingInfo : WXPBGeneratedMessage

@property (nonatomic) BOOL isTalking;
@property (nonatomic) unsigned int connectTime;
@property (nonatomic) int roomRole;
@property (nonatomic) int roomType;
@property (retain, nonatomic) VoIPMPUserInfo *userInfo;
@property (retain, nonatomic) VoIPMPUserInfo *oppositeInfo;
@property (retain, nonatomic) NSMutableArray *otherInfo;
@property (nonatomic) int mainUi;
@property (nonatomic) int ui;

+ (void)initialize;

@end
