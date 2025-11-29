@class BDMannorAdLearnMoreView, NSString, BDMannorComponentManagerContext, BDMannorStyleTemplateComponentDataModel, BDMannorStyleTemplateComponentModel, UIView;

@interface BDMannorAdLearnMoreComponent : NSObject <BDMannorAdComponentProtocol>

@property (retain, nonatomic) BDMannorStyleTemplateComponentModel *componentModel;
@property (retain, nonatomic) BDMannorStyleTemplateComponentDataModel *data;
@property (nonatomic) BOOL isShow;
@property (nonatomic) BOOL downgrade;
@property (copy, nonatomic) NSString *componentType;
@property (retain, nonatomic) BDMannorAdLearnMoreView *learnMoreView;
@property (weak, nonatomic) BDMannorComponentManagerContext *context;
@property (readonly, nonatomic) UIView *componentView;
@property (readonly, nonatomic) NSString *scene;
@property (readonly, nonatomic) NSString *componentID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0 componentType:(id)a1;
- (void)createComponentViewAndConfig;
- (void)p_addEventHandler;
- (void)destory;
- (void).cxx_destruct;
- (void)hide;
- (void)show;

@end
