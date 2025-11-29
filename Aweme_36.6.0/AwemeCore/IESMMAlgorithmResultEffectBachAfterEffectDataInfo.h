@interface IESMMAlgorithmResultEffectBachAfterEffectDataInfo : NSObject

@property (nonatomic) int time;
@property (nonatomic) float score;
@property (nonatomic) float face_score;
@property (nonatomic) float quality_score;
@property (nonatomic) float sharepness_score;
@property (nonatomic) float meaningless_score;
@property (nonatomic) float portrait_score;

- (id)init;

@end
