@class NSString;

@interface AWEShowProductDetailIAAIAPSceneConfig : AWEShowBottomButtonBaseSceneConfig <AWEShowBottomButtonSceneConfigProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)leftButtonConfig;
- (id)rightButtonConfig;
- (id)multipleEventsViewStyle;
- (unsigned long long)leftPluginType;
- (Class)leftRegisteredPluginClasses;
- (unsigned long long)rightPluginType;
- (Class)rightRegisteredPluginClasses;
- (id)sceneID;

@end
