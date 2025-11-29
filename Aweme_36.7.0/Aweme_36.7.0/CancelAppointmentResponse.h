@class CancelAppointmentData, CancelAppointmentExtra;

@interface CancelAppointmentResponse : IESLivePBBaseMessage

@property (retain, nonatomic) CancelAppointmentData *data_p;
@property (nonatomic) BOOL hasData_p;
@property (retain, nonatomic) CancelAppointmentExtra *extra;
@property (nonatomic) BOOL hasExtra;

+ (id)descriptor;

@end
