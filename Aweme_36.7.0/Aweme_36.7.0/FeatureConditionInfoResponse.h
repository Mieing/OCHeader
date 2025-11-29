@class FeatureConditionInfoResponse_Data;

@interface FeatureConditionInfoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) FeatureConditionInfoResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
