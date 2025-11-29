@class NSString;
@protocol AWEGCPEvaluationCardManagerInterface;

@interface AWEPlayInteractionGameCPEvaluationElement : AWEPlayInteractionLeftElement <AWEElementSelfFilterProtocol>

@property (nonatomic) BOOL cardAllreadyShown;
@property (retain, nonatomic) id<AWEGCPEvaluationCardManagerInterface> evaluationCardManagerInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;
+ (BOOL)shouldHandleGameCPEvaluationElementModel:(id)a0;

- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)prepareForActivate;
- (void)createContainerIfNeedWithAwemeModel:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (void)reset;
- (void)viewDidLoad;

@end
