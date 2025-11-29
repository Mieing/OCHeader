@interface OMCEqualizerPeakingFilterParams : NSObject

@property (nonatomic) float fc;
@property (nonatomic) float gain;
@property (nonatomic) float Q;

- (id)init;
- (id)description;

@end
