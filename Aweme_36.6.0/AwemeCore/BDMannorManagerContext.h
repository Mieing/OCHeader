@class BDMannorComponentElement, NSArray, NSDictionary, NSString, BDMannorAdShowEventConfig, BDMannorAdDataModel, BDMannorStyleTemplateModel;
@protocol BDMannorAdComponentDelegate;

@interface BDMannorManagerContext : NSObject

@property (retain, nonatomic) BDMannorAdShowEventConfig *adShowEventConfig;
@property (copy, nonatomic) id /* block */ lifecycleDelegateDidChangeBlock;
@property (copy, nonatomic) id /* block */ contextHandlerDidChangeBlock;
@property (copy, nonatomic) id /* block */ componentSpecificContextHandlerDidChangeBlock;
@property (copy, nonatomic) id /* block */ injectHandlerMapDidChangeBlock;
@property (copy, nonatomic) id /* block */ customizedClickPriorityDidChangeBlock;
@property (copy, nonatomic) id /* block */ sceneContextHandler;
@property (copy, nonatomic) id /* block */ contextHandler;
@property (copy, nonatomic) id /* block */ componentSpecificContextHandler;
@property (copy, nonatomic) id /* block */ clickHandler;
@property (copy, nonatomic) NSDictionary *injectHandlerMap;
@property (copy, nonatomic) NSDictionary *injectHandlerMapForSwift;
@property (copy, nonatomic) NSArray *JSBridges;
@property (weak, nonatomic) id<BDMannorAdComponentDelegate> componentLifecycleDelegate;
@property (retain, nonatomic) NSDictionary *lynxGlobalProps;
@property (nonatomic) double fontScale;
@property (nonatomic) BOOL useBuildinFeedback;
@property (copy, nonatomic) NSArray *customizedClickPriority;
@property (nonatomic) BOOL withOutAtpClick;
@property (nonatomic) BOOL globalClickInterceptor;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *logExtra;
@property (retain, nonatomic) BDMannorAdDataModel *adData;
@property (retain, nonatomic) BDMannorStyleTemplateModel *styleTemplate;
@property (retain, nonatomic) BDMannorComponentElement *componentElement;

- (void)setcustomizedClickPriority:(id)a0;
- (void).cxx_destruct;

@end
