@class NSString, NSMutableDictionary, LLDitoPageContext;
@protocol LLDitoExtensionContainerProtocol;

@interface LLDitoComponentTrackExtension : NSObject <LLDitoExtensionProtocol, LLDitoViewControllerLifeCycleProtocol, LLDitoViewControllerLifeCycleProtocol_Private>

@property (retain, nonatomic) NSMutableDictionary *eventMap;
@property (copy, nonatomic) NSString *logID;
@property (weak, nonatomic) LLDitoPageContext *context;
@property (weak, nonatomic) id<LLDitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidEnterBackground;
- (void)viewDidEnterForeground;
- (void)viewDealloc;
- (void)didLoadPageModel:(id)a0;
- (void)didEndRequestWithResponse:(id)a0 error:(id)a1;
- (void)componentViewModelCreatedWithError:(id)a0;
- (void)componentViewModelDidCreated:(id)a0;
- (void)componentViewWillShow:(id)a0;
- (void)componentViewDidCompleteShow:(id)a0;
- (void)componentViewDidEndShow:(id)a0;
- (void)componentView:(id)a0 didUpdateViewModel:(id)a1;
- (void)initializeExtension;
- (void)setComponentErrorStageOfTag:(id)a0 stage:(long long)a1 message:(id)a2 errorType:(id)a3;
- (void)reportComponentShowStage:(long long)a0 tag:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (void)startComponentShowTimeTrack:(id)a0;
- (void)pauseComponentShowTimeTrack:(id)a0;
- (void)startVisibleVMStayTime;
- (void)pauseVisibleVMStayTime;
- (void)setComponentLongestStageOfTag:(id)a0 stage:(long long)a1;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewDidDisappear;

@end
