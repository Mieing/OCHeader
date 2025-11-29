@interface QMapStatusOption : NSObject

@property (nonatomic) BOOL animated;
@property (nonatomic) double duration;
@property (nonatomic) BOOL byGesture;
@property (nonatomic) BOOL triggerRegionChangeDistributor;
@property (nonatomic) BOOL triggerDecreaseTrackingMode;

+ (id)mapStatusOptionWithAnimation:(BOOL)a0 duration:(double)a1 byGesture:(BOOL)a2 triggerRegionChange:(BOOL)a3 triggerDecreaseTrackingMode:(BOOL)a4;

- (id)init;

@end
