@class InteractEffectResponse_QueryResult;

@interface InteractEffectResponse : IESLivePBBaseMessage

@property (retain, nonatomic) InteractEffectResponse_QueryResult *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
