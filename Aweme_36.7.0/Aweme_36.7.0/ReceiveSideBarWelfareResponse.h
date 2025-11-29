@class ReceiveSideBarWelfareResponse_Data;

@interface ReceiveSideBarWelfareResponse : IESLivePBBaseMessage

@property (retain, nonatomic) ReceiveSideBarWelfareResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
