@class FPWritableStateFlow, AWEShowAuthLayoutAction;
@protocol IESServiceProvider;

@interface AWERecordAuthComponent : NSObject <FPInitialUIComponent>

@property (class, readonly, nonatomic) Class stateType;

@property (retain, nonatomic) FPWritableStateFlow *stateFlow;
@property (retain, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) AWEShowAuthLayoutAction *layoutAction;
@property (readonly, nonatomic) FPWritableStateFlow *typeErasedStateFlow;

+ (id)initialUIStateWith:(id)a0;

- (void)didMount;
- (id)initWith:(id)a0 serviceProvider:(id)a1;
- (void)loadViewState;
- (void)trackPermissionStatus;
- (void)clickClose;
- (void)_showToast:(id)a0;
- (void)pushAuthorityHelpWebController;
- (void)observeAuthStatusWith:(id)a0;
- (void)observeLandingModeWith:(id)a0;
- (void)observeAuthAlbumRemindWith:(id)a0;
- (void)authGrant;
- (void)grantAlertReject;
- (void)grandAlertConfirm;
- (void).cxx_destruct;

@end
