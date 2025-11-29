@class FlexActivityRegisterResponse_Data;

@interface FlexActivityRegisterResponse : IESLivePBBaseMessage

@property (retain, nonatomic) FlexActivityRegisterResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
