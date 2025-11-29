@class LeaveLiveResponse_Data;

@interface LeaveLiveResponse : IESLivePBBaseMessage

@property (retain, nonatomic) LeaveLiveResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
