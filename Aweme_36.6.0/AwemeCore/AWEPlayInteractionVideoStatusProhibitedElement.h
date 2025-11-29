@class NSString, UIView;
@protocol AWEProhibitedURLViewProtocol;

@interface AWEPlayInteractionVideoStatusProhibitedElement : AWEPlayInteractionNewBottomElement <AWEProhibitedURLViewDelegate>

@property (retain, nonatomic) UIView<AWEProhibitedURLViewProtocol> *prohibitedURLView;
@property (nonatomic) BOOL isReplacingMusic;
@property (nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:(id)a0;
- (void)trackPlaypageItemAuditBarIsDisplay:(BOOL)a0;
- (void)handleReplaceMusicStatusNotification:(id)a0;
- (void)trackReplaceBarShow;
- (id)prohibitedURLViewText:(id)a0;
- (BOOL)shouldStartReplaceMusic:(id)a0;
- (id)prohibitedURLLink:(id)a0;
- (BOOL)shouldShowProhibitedURLView:(id)a0;
- (BOOL)disableProhibitedURLView:(long long)a0 audioEditStatus:(long long)a1;
- (id)musicOffLineText:(id)a0;
- (id)setupProhibitedURLView;
- (void)prohibitedURLViewDidClick:(id)a0;
- (void)updateProhibitedURLView;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)identifier;
- (void)dealloc;

@end
