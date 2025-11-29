@class BDCertConditionModel;

@interface BDCertCondition : NSObject

@property (retain, nonatomic) BDCertConditionModel *model;

- (void)parseParams:(id)a0;
- (id)validateCertUnit:(id)a0;
- (id)extractConfigParams;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
