@class NSString;

@interface AWEPlayInteractionBatManElement : AWEPlayInteractionLeftElement <AWEBatManEntranceDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActiveWithModel:(id)a0;

- (void)viewController_willDisplay;
- (void)viewController_viewWillAppear;
- (void)viewController_viewWillDisappear;
- (id)activateInfoWithData:(id)a0;
- (void)showBatManEnterenceIfNeeded:(BOOL)a0;
- (void)hideBatManEntranceIfNeeded;
- (void)batManEntranceWillShow:(id)a0;
- (void)batManEntranceCustomNormalEntrance:(id)a0 normalEntranceView:(id)a1;
- (void)reset;

@end
