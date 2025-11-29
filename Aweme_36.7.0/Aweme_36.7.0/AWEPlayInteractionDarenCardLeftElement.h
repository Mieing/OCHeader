@class NSString, NSObject;
@protocol AWEPOIPromptCardManager;

@interface AWEPlayInteractionDarenCardLeftElement : AWEPlayInteractionLeftElement <AWEElementSelfFilterProtocol>

@property (retain, nonatomic) NSObject<AWEPOIPromptCardManager> *promptCardManager;
@property (nonatomic) BOOL promptCardAlreadyShown;
@property (nonatomic) BOOL hideOtherElement;
@property (nonatomic) long long navigationVCCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;
+ (BOOL)canShowElementWithContext:(id)a0;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)viewController_viewWillAppear;
- (void)viewController_viewDidAppear;
- (void)viewController_viewDidDisappear;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (void).cxx_destruct;
- (void)clear;
- (void)reset;
- (void)viewDidLoad;

@end
