@class NSString;

@interface AWEProfileEADynamicIconComponent : AWEProfileEABaseController <AWEProfileEAHintProtocol>

@property (nonatomic) BOOL isOnScreen;
@property (nonatomic) unsigned long long targetCardType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showHint;
- (void)refreshUserModel:(id)a0;
- (void)resetAllCardView;
- (BOOL)canShowHint;
- (void)showDynamicIconWithIndexPath:(id)a0 config:(id)a1;
- (unsigned long long)hintPriority;
- (BOOL)shouldShowHint;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)viewWillDisappear;

@end
