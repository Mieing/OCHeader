@class NSString, NSDate;

@interface AWEIMCompanyCollectInfoContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (copy, nonatomic) NSDate *lastClickTimeDate;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellVisibleLifeCycleChanged:(unsigned long long)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_createPresenter;
- (void)p_updateViewModel;
- (void)p_showInactiveEnterpriseInstantMessageCardToast;
- (void)p_updatePresenterSize:(struct CGSize { double x0; double x1; })a0;
- (void)p_trackLoadViewTimeWithSuccess:(BOOL)a0 duration:(long long)a1;
- (void)p_didRegisterLynxContextWithSchema:(id)a0;
- (void)p_trackHitTest;
- (void).cxx_destruct;
- (id)displayMessage;
- (id)message;

@end
