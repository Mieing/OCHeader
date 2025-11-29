@class NSString, UIView;
@protocol IESHYContainerProtocol;

@interface AWELiveStreamInteractChorusConcertElement : AWELiveBaseElement <IESHYHybridViewLifecycleProtocol, IESLiveInteractPreStreamMSequenceSwitchAction>

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *lynxView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)preloadElement;
- (void)interactMSequenceDidSwitchWithRoom:(id)a0;
- (void)loadLynxViewWithRoom:(id)a0;
- (void)createLynxView:(double)a0 room:(id)a1;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)prepareForReuse;
- (void)reset;

@end
