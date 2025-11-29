@class NSString, NSObject;
@protocol AWEAdActivityElementInsideComponentProtocol;

@interface AWEPlayInteractionAdActivityElement : AWEPlayInteractionLeftElement <AWEElementSelfFilterProtocol>

@property (retain, nonatomic) Class componentClass;
@property (retain, nonatomic) NSObject<AWEAdActivityElementInsideComponentProtocol> *insideComponent;
@property (nonatomic) BOOL hide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;

- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewWillAppear;
- (void)viewController_viewDidAppear;
- (void)viewController_viewWillDisappear;
- (id)activateInfoWithData:(id)a0;
- (void)prepareForActivate;
- (void)viewDidDisposed;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end
