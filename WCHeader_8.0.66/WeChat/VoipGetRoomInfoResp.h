@class NSString, NSMutableArray, BaseResponse;

@interface VoipGetRoomInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int roomId;
@property (nonatomic) long long roomKey;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) int memberCount;
@property (retain, nonatomic) NSMutableArray *memberStatus;
@property (retain, nonatomic) NSString *callerUserName;
@property (nonatomic) unsigned int inviteType;

+ (void)initialize;

@end
