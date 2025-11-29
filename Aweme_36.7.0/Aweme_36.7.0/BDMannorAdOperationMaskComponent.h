@class UIView, NSString, NSDictionary, BDMannorComponentManagerContext, BDMannorStyleTemplateComponentDataModel, BDMannorStyleTemplateComponentModel, BDMannorAdOperationMaskView;

@interface BDMannorAdOperationMaskComponent : NSObject <BDMannorAdComponentProtocol>

@property (retain, nonatomic) BDMannorStyleTemplateComponentModel *componentModel;
@property (retain, nonatomic) BDMannorStyleTemplateComponentDataModel *data;
@property (nonatomic) BOOL isShow;
@property (nonatomic) BOOL downgrade;
@property (copy, nonatomic) NSString *componentType;
@property (retain, nonatomic) BDMannorAdOperationMaskView *adOperationView;
@property (copy, nonatomic) NSDictionary *layoutContext;
@property (copy, nonatomic) NSDictionary *parsedTrackConfig;
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
- (void)onAdOperationViewClicked:(id)a0;
- (void)p_addEventHandler;
- (void)p_configOperationMaskElement;
- (void)sendMaskTrackWithAreaKey:(id)a0 eventName:(id)a1 params:(id)a2 adExtraParams:(id)a3;
- (void)adOperationComponentClickedWith:(unsigned long long)a0 refer:(id)a1;
- (void)broasCastAdClickToHostWith:(unsigned long long)a0 refer:(id)a1;
- (void)destory;
- (void).cxx_destruct;
- (void)hide;
- (void)show;

@end
