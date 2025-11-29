@class AnchorSubscriptionResponse_Data;

@interface AnchorSubscriptionResponse : IESLivePBBaseMessage

@property (retain, nonatomic) AnchorSubscriptionResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
