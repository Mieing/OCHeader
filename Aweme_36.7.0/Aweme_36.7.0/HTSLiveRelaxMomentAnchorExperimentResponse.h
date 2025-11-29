@class HTSLiveRelaxMomentAnchorExperimentResponse_Data;

@interface HTSLiveRelaxMomentAnchorExperimentResponse : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveRelaxMomentAnchorExperimentResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
