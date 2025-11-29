@class BaseRequest, NSString, VoipStatReportData;

@interface VoipCancelInviteReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *fromUsername;
@property (nonatomic) int roomId;
@property (nonatomic) long long roomKey;
@property (retain, nonatomic) NSString *toUserName;
@property (retain, nonatomic) VoipStatReportData *reportData;
@property (nonatomic) unsigned int inviteType;
@property (nonatomic) unsigned long long timestamp64;
@property (nonatomic) unsigned int inviteId;
@property (nonatomic) unsigned int cancelType;
@property (nonatomic) unsigned int intervalWithInvite;

+ (void)initialize;

@end
