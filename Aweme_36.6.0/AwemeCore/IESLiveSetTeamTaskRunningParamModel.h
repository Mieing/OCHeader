@class NSString;

@interface IESLiveSetTeamTaskRunningParamModel : IESLiveBridgeModel

@property (nonatomic) BOOL isRunning;
@property (copy, nonatomic) NSString *pkExpandType;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
