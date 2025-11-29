@class NSString, UIImageView, UILabel, UIView;

@interface IESIMGroupAICloneSheetNaviBarComponent : AWEIMComponentBase <IESIMGroupAICloneNaviBarInterface>

@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)naviBarView;
- (void)componentDidMounted:(id)a0;
- (void)setNaviTitle:(id)a0;
- (double)tableViewTopInset;
- (void)setRightButtonTitle:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)manageVCWithAddedAIClone:(id)a0 netSuccess:(BOOL)a1 alreadyExist:(BOOL)a2;
- (void)setTitleIconWithImageName:(id)a0;
- (void)setTitleIconSize:(struct CGSize { double x0; double x1; })a0 leftOffset:(double)a1;
- (void)setTitleIconWithURL:(id)a0 completion:(id /* block */)a1;
- (void)p_setupTitleBar;
- (void)p_setupIconImageView;
- (void).cxx_destruct;

@end
