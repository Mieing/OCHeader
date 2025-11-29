@class HTSLiveUser;

@interface HTSLiveRelaxAppointmentSubscribeListResponse_Item : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;

+ (id)descriptor;

@end
