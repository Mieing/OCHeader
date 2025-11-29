@class NSNumber;

@interface AWEGetCurrentGCJLocationParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSNumber *silent;
@property (copy, nonatomic) NSNumber *forceLocate;
@property (copy, nonatomic) NSNumber *isLegitimate;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
