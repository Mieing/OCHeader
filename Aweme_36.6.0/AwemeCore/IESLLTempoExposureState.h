@interface IESLLTempoExposureState : NSObject

@property (nonatomic) float maxThreshold;
@property (nonatomic) float lastThreshold;
@property (readonly, nonatomic) BOOL isReportAll;
@property (nonatomic) BOOL enableDisexposure;

- (id)init;

@end
