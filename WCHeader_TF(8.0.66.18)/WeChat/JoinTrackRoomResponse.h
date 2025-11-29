@class NSString, BaseResponse;

@interface JoinTrackRoomResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *trackRoomId;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) NSString *uniqueRoomId;
@property (nonatomic) unsigned int onlineUserCount;
@property (nonatomic) unsigned int hasLegacyUser;
@property (nonatomic) unsigned int isRoomCreated;

+ (void)initialize;

@end
