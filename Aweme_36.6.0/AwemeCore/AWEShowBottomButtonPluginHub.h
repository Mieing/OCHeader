@class NSMutableDictionary, AWEPlayInteractionContext, AWEPageContext, NSString;
@protocol AWEShowBottomButtonPluginHubDelegate, AWEEntertainmentMultipleEventsViewProtocol;

@interface AWEShowBottomButtonPluginHub : NSObject <AWEShowBottomButtonPluginHubProtocol>

@property (weak, nonatomic) AWEPlayInteractionContext *interactionContext;
@property (weak, nonatomic) id<AWEEntertainmentMultipleEventsViewProtocol> multipleEventsView;
@property (retain, nonatomic) AWEPageContext *eventContext;
@property (retain, nonatomic) NSMutableDictionary *plugins;
@property (weak, nonatomic) id<AWEShowBottomButtonPluginHubDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addEventHandler;
- (void)trackWithEvent:(id)a0 params:(id)a1 forPluginType:(unsigned long long)a2;
- (id)getSchemaParamsForPluginType:(unsigned long long)a0;
- (void)registerPlugin:(id)a0 sceneID:(id)a1;
- (void)unregisterPlugin:(unsigned long long)a0 sceneID:(id)a1;
- (id)getPluginForType:(unsigned long long)a0 sceneID:(id)a1;
- (id)initWithContext:(id)a0 multipleEventsView:(id)a1;
- (void).cxx_destruct;

@end
