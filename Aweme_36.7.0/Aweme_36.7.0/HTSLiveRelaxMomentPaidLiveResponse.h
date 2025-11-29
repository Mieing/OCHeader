@class HTSLiveRelaxMomentPaidLiveResponse_Data;

@interface HTSLiveRelaxMomentPaidLiveResponse : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveRelaxMomentPaidLiveResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
