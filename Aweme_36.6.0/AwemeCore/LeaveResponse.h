@class LeaveResponse_ResponseData;

@interface LeaveResponse : IESLivePBBaseMessage

@property (retain, nonatomic) LeaveResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
