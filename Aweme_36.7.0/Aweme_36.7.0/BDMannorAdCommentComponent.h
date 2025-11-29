@class UIView, NSString, NSDictionary, BDMannorComponentManagerContext, BDMannorStyleTemplateComponentDataModel, BDMannorStyleTemplateComponentModel, BDMannorAdCommentGuideView;

@interface BDMannorAdCommentComponent : NSObject <BDMannorAdComponentProtocol>

@property (retain, nonatomic) BDMannorStyleTemplateComponentModel *componentModel;
@property (retain, nonatomic) BDMannorStyleTemplateComponentDataModel *data;
@property (nonatomic) BOOL isShow;
@property (nonatomic) BOOL downgrade;
@property (copy, nonatomic) NSString *componentType;
@property (retain, nonatomic) BDMannorAdCommentGuideView *adCommentGuideView;
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
- (void)sendGuideTrackWithAreaKey:(id)a0 eventName:(id)a1 params:(id)a2 adExtraParams:(id)a3;
- (void)sendGuideTrackV3WithAreaKey:(id)a0 eventName:(id)a1 params:(id)a2 adExtraParams:(id)a3;
- (void)adCommentComponentClickedWith:(unsigned long long)a0 refer:(id)a1;
- (id)buildDynamicParamsWithParams:(id)a0 adExtraParams:(id)a1;
- (void)destory;
- (void).cxx_destruct;
- (void)hide;
- (void)show;

@end
