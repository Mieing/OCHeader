@class NSString;

@interface AWEIMMinorsProtectionInteractor : AWEIMComponentBase <AWEIMMinorsProtectionInteractorInterface>

@property (nonatomic) BOOL showKeyBoard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewDidAppearAndRender;
- (void)hostVC_afterFirstRender;
- (void)p_viewDidAppear;
- (id)vcParent;
- (BOOL)shouldSendUserActionWithModel:(id)a0;
- (BOOL)isEnterConFirstTimeWithModel:(id)a0;
- (void)p_showKeyboardIfNeededV2;
- (BOOL)__checkAndShowSafetyWarning;

@end
