@class StopAppResponse_Data;

@interface StopAppResponse : IESLivePBBaseMessage

@property (retain, nonatomic) StopAppResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
