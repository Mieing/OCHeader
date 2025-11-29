@class NSObject;
@protocol AWEGCPEvaluationCardManagerInterface;

@interface AWEGCPEvaluationCardWidget : IESGCPBaseWidget

@property (retain, nonatomic) NSObject<AWEGCPEvaluationCardManagerInterface> *evaluationCardManager;

+ (BOOL)widgetShouldBeActivatedWithDIContext:(id)a0;

- (void)widgetDidCreate;
- (void)widgetWillDestroy;
- (void)widgetBindService;
- (void).cxx_destruct;

@end
