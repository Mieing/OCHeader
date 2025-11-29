@class HTSLiveRelaxPaidLiveContainer;

@interface HTSLiveRelaxMomentPaidLiveResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveRelaxPaidLiveContainer *paidLive;
@property (nonatomic) BOOL hasPaidLive;

+ (id)descriptor;

@end
