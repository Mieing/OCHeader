@class NSString, HTSLiveUser;

@interface GetCollaborateRecordsResp_CollaborateRecord : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (copy, nonatomic) NSString *onlineRoomIdStr;

+ (id)descriptor;

@end
