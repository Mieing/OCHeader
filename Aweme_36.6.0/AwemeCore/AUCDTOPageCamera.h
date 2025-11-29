@class AUCDTOBasicCamera, AUCDTOFeatureCamera;

@interface AUCDTOPageCamera : AUCDTOPageConfig

@property (retain, nonatomic) AUCDTOBasicCamera *basic;
@property (retain, nonatomic) AUCDTOFeatureCamera *feature;

- (void).cxx_destruct;
- (id)init;

@end
