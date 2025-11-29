@class NSString;

@interface OHRHandPredictConfig : OHRBasePredictConfig <OHRHandPredictConfig>

@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSString *taskName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
