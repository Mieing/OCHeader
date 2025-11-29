@class NSString;

@interface AWEPlayInteractionFeedPauseModalElement : AWEPlayInteractionLeftElement <AWEElementSelfFilterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;
+ (BOOL)shouldActiveWithContext:(id)a0;
+ (BOOL)shouldShowPauseModalWithModel:(id)a0;

- (void)initializeElement;
- (void)viewController_didEndDisplaying;
- (id)activateInfoWithData:(id)a0;
- (void)hiddenPauseModalStyleView;
- (void)reset;
- (void)viewDidLoad;
- (id)context;

@end
