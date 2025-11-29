@class HTSLiveUser, HTSLiveRoom;

@interface AppointmentData_AppointmentItem : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveRoom *room;
@property (nonatomic) BOOL hasRoom;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) int status;

+ (id)descriptor;

@end
