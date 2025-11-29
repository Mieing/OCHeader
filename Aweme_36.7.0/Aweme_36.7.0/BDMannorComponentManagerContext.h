@class NSString, NSArray, AWEPageContext, BDMannorAdDataModel, NSMutableDictionary, NSDictionary, BDMannorStyleTemplateModel, BDMannorComponentElement;
@protocol BDMannorAdComponentDelegate;

@interface BDMannorComponentManagerContext : NSObject

@property (retain, nonatomic) BDMannorComponentElement *componentElement;
@property (copy, nonatomic) id /* block */ contextHandler;
@property (copy, nonatomic) id /* block */ componentSpecificContextHandler;
@property (copy, nonatomic) NSDictionary *injectHandlerMap;
@property (copy, nonatomic) NSArray *JSBridges;
@property (weak, nonatomic) id<BDMannorAdComponentDelegate> componentLifecycleDelegate;
@property (retain, nonatomic) NSDictionary *lynxGlobalProps;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *logExtra;
@property (retain, nonatomic) BDMannorAdDataModel *adData;
@property (retain, nonatomic) BDMannorStyleTemplateModel *styleTemplate;
@property (nonatomic) double fontScale;
@property (copy, nonatomic) NSArray *customizedClickPriority;
@property (nonatomic) BOOL withOutAtpClick;
@property (nonatomic) BOOL globalClickInterceptor;
@property (retain, nonatomic) AWEPageContext *eventContext;
@property (retain, nonatomic) NSMutableDictionary *componentMap;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
