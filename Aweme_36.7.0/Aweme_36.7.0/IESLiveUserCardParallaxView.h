@class NSString, UIView;
@protocol IESHYContainerProtocol;

@interface IESLiveUserCardParallaxView : UIView <IESHYHybridViewLifecycleProtocol>

@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *parallaxContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidRecieveError:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (id)initWithSchema:(id)a0 context:(id)a1;
- (id)currentLynxData;
- (void).cxx_destruct;
- (void)setupUI;

@end
