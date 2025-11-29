@class AWEShareContext, NSString, NSArray, NSDictionary, UIView, UIButton;
@protocol AWESharePanelCustomUIConfigProtocol;

@interface AWESharePanelCustomConfiguration : NSObject <AWESharePanelCustomConfigurationProtocol>

@property (copy, nonatomic) NSString *sceneType;
@property (retain, nonatomic) AWEShareContext *shareContext;
@property (nonatomic) BOOL hasMaskColor;
@property (weak, nonatomic) UIButton *button;
@property (retain, nonatomic) UIView *topBubbleView;
@property (nonatomic) double panelCreateTime;
@property (copy, nonatomic) id /* block */ functionCheckHandler;
@property (copy, nonatomic) id /* block */ functionCheckCompleteHandler;
@property (copy, nonatomic) id /* block */ functionSharePreOperationHandler;
@property (copy, nonatomic) NSArray *functionSharedHandlers;
@property (copy, nonatomic) NSArray *shareCompleteHandlers;
@property (copy, nonatomic) NSArray *customShareTyps;
@property (copy, nonatomic) NSArray *unexpectedShareTyps;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL shouldAllowPresentationHook;
@property (retain, nonatomic) id<AWESharePanelCustomUIConfigProtocol> customUIConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)AllFeedScenes;

@end
