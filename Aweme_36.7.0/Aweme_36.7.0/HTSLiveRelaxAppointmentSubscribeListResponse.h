@class HTSLiveRelaxAppointmentSubscribeListResponse_ResponseData;

@interface HTSLiveRelaxAppointmentSubscribeListResponse : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveRelaxAppointmentSubscribeListResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
