@class BaseRequest, NSString;

@interface ADAppointmentReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *uxinfo;
@property (nonatomic) unsigned long long appointmentId;
@property (nonatomic) int opType;
@property (retain, nonatomic) NSString *phoneNumber;

+ (void)initialize;

@end
