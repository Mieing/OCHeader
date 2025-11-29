@class AWEVideoPublishViewModel;

@interface ACCGenericTemplateTextParamManager : NSObject <NPPreprocessTextParamDelegateProtocol_OC>

@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;

- (id)initWithPublishModel:(id)a0;
- (void)requestTextParamResultsWithRequestInfo:(id)a0 slotInfos:(id)a1 requestCallback:(id)a2;
- (id)requestCaptionDurationsWithSlotInfo:(id)a0 templateId:(id)a1;
- (void)requestTextKeywordWithSlotInfo:(id)a0 templateId:(id)a1 completion:(id /* block */)a2;
- (void)beginKeywordCoreTracker:(id)a0;
- (void).cxx_destruct;

@end
