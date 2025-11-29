@class UIView, NSString, BDMannorAdKVAbstractView, NSDictionary, BDMannorStyleTemplateComponentDataModel, BDMannorStyleTemplateComponentModel, BDMannorComponentManagerContext;

@interface BDMannorAdKVAbstractComponent : NSObject <BDMannorAdComponentProtocol>

@property (retain, nonatomic) BDMannorStyleTemplateComponentModel *componentModel;
@property (retain, nonatomic) BDMannorStyleTemplateComponentDataModel *data;
@property (retain, nonatomic) BDMannorAdKVAbstractView *kvAbstractView;
@property (copy, nonatomic) NSString *componentType;
@property (copy, nonatomic) NSDictionary *parsedTrackConfig;
@property (weak, nonatomic) BDMannorComponentManagerContext *context;
@property (readonly, nonatomic) UIView *componentView;
@property (readonly, nonatomic) NSString *scene;
@property (readonly, nonatomic) NSString *componentID;
@property (readonly, nonatomic) BOOL isShow;
@property (readonly, nonatomic) BOOL downgrade;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0 componentType:(id)a1;
- (void)createComponentViewAndConfig;
- (void)p_configView;
- (id)buildDynamicParamsWithParams:(id)a0 adExtraParams:(id)a1;
- (void)sendTrackWithAreaKey:(id)a0 eventName:(id)a1 params:(id)a2 adExtraParams:(id)a3;
- (void)destory;
- (void).cxx_destruct;
- (void)hide;
- (void)show;

@end
