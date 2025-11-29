@class ACCCameraSubscription, NSString, NLEInterface_OC, NLEModel_OC;

@interface AEKBaseData : NSObject

@property (retain, nonatomic) NLEInterface_OC *nle;
@property (retain, nonatomic) NLEModel_OC *nleModel;
@property (copy, nonatomic) NSString *draftFolder;
@property (retain, nonatomic) ACCCameraSubscription *templateSubscription;

- (id)initWithNLE:(id)a0 nleModel:(id)a1 draftFolder:(id)a2;
- (void)applyTemplateDone:(id)a0 target:(id)a1;
- (void)addTemplateApplySubscriber:(id)a0;
- (void)removeTemplateApplySubscriber:(id)a0;
- (void).cxx_destruct;

@end
