@class NSMutableDictionary;
@protocol ILiteAppJsApiPluginControllerProtocol;

@interface LiteAppJsApiPluginScheduler : NSObject

@property (readonly, nonatomic) NSMutableDictionary *pluginName2InstanceDic;
@property (readonly, weak, nonatomic) id<ILiteAppJsApiPluginControllerProtocol> ownerLiteAppController;

- (id)initWithOwnerLiteAppController:(id)a0;
- (void)dealloc;
- (id)GetPluginInstanceByName:(id)a0;
- (void)handleEvent:(unsigned long long)a0 userInfo:(id)a1;
- (void)handleEvent:(unsigned long long)a0 userInfo:(id)a1 retInfo:(id)a2;
- (void)loadingInitPluginArray;
- (void).cxx_destruct;

@end
