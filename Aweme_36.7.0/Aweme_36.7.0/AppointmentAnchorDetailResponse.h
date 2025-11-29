@class AppointmentAnchorDetailData;

@interface AppointmentAnchorDetailResponse : IESLivePBBaseMessage

@property (retain, nonatomic) AppointmentAnchorDetailData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
