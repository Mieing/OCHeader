@class PayDiamondsResponse_Data;

@interface PayDiamondsResponse : IESLivePBBaseMessage

@property (retain, nonatomic) PayDiamondsResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
