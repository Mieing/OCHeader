@class NSString, WXCPbVoiceClientScene, NSData, NSMutableArray;

@interface WXCPbVoiceGroupMem : WXPBGeneratedMessage

@property (nonatomic) unsigned int uuid;
@property (nonatomic) unsigned int inviteuuid;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned int reason;
@property (nonatomic) int memberId;
@property (nonatomic) unsigned int inviteTime;
@property (retain, nonatomic) WXCPbVoiceClientScene *clientScene;
@property (nonatomic) unsigned int memberSession;
@property (retain, nonatomic) NSString *openClientId;
@property (retain, nonatomic) NSMutableArray *clientSceneExtList;
@property (retain, nonatomic) NSString *wxUserName;
@property (retain, nonatomic) NSString *wxInviteUserName;
@property (retain, nonatomic) NSData *mailAuthBuf;

+ (void)initialize;

@end
