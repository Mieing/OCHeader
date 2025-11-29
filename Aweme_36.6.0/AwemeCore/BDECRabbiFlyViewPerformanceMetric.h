@interface BDECRabbiFlyViewPerformanceMetric : NSObject <NSCopying>

@property (nonatomic) double loadTemplateStartTime;
@property (nonatomic) double loadTemplateEndTime;
@property (nonatomic) double bindDataStartTime;
@property (nonatomic) double bindDataEndTime;
@property (nonatomic) BOOL isFirstTimeBindData;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
