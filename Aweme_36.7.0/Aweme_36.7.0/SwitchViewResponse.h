@class SwitchViewResponse_Data;

@interface SwitchViewResponse : IESLivePBBaseMessage

@property (retain, nonatomic) SwitchViewResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
