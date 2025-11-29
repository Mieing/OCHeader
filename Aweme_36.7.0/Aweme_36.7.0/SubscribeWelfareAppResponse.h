@class SubscribeWelfareAppResponse_Data;

@interface SubscribeWelfareAppResponse : IESLivePBBaseMessage

@property (retain, nonatomic) SubscribeWelfareAppResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
