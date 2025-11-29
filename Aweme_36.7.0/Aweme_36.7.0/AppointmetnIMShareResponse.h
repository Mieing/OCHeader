@class AppointmentIMShareData;

@interface AppointmetnIMShareResponse : IESLivePBBaseMessage

@property (retain, nonatomic) AppointmentIMShareData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
