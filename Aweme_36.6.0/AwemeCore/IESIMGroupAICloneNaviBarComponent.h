@class NSString;

@interface IESIMGroupAICloneNaviBarComponent : AWEIMComponentBase <IESIMGroupAICloneNaviBarInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)naviBarView;
- (void)componentDidMounted:(id)a0;
- (void)setupNaviBar;
- (void)setNaviTitle:(id)a0;
- (double)tableViewTopInset;
- (void)setRightButtonTitle:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)manageVCWithAddedAIClone:(id)a0 netSuccess:(BOOL)a1 alreadyExist:(BOOL)a2;
- (void)p_backToMessageVC;
- (void)leave;

@end
