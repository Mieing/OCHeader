@class LeaveFormatResponse_Data;

@interface LeaveFormatResponse : IESLivePBBaseMessage

@property (retain, nonatomic) LeaveFormatResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
