@class AWEElementContainer, NSArray, AWEPageContext, UILabel, UIView, NSObject;
@protocol AWEAwemeDetailNaviBarCommonContextProtocol, AWEAwemeDetailNaviBarControllerProtocol;

@interface AWEPlayletCenterNaviBarCoordinator : NSObject

@property (retain, nonatomic) UIView *naviBarContainerView;
@property (retain, nonatomic) UIView *leftContainerParentView;
@property (retain, nonatomic) UIView *rightContainerParentView;
@property (retain, nonatomic) AWEElementContainer *leftContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEElementContainer *rightContainer;
@property (copy, nonatomic) NSArray *elementArray;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWEPageContext<AWEAwemeDetailNaviBarCommonContextProtocol> *context;
@property (retain, nonatomic) NSObject<AWEAwemeDetailNaviBarControllerProtocol> *activeNaviBarController;

- (void)configNaviBarContainerView;
- (void)updateNaviBarElementsWithAweme:(id)a0;
- (id)getElementArray;
- (id)initWithContext:(id)a0 containerView:(id)a1;
- (void)showMiddleTitle:(BOOL)a0;
- (void).cxx_destruct;

@end
