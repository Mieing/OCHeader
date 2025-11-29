@class NSNumber, IESEffectModel;

@interface ACCCinemaModeRearFilterInfo : NSObject

@property (retain, nonatomic) IESEffectModel *effectModel;
@property (retain, nonatomic) NSNumber *intensity;

- (id)initWithModel:(id)a0 intensity:(id)a1;
- (void).cxx_destruct;

@end
