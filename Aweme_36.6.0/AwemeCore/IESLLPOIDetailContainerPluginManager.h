@class NSArray, NSString;

@interface IESLLPOIDetailContainerPluginManager : NSObject <IESLLPOIDetailContainerPlugin>

@property (retain, nonatomic) NSArray *plugins;
@property (copy, nonatomic) id /* block */ getPOIDetailContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addPlugin:(id /* block */)a0 forKey:(id)a1;
+ (void)removePlugin:(id /* block */)a0 forKey:(id)a1;
+ (id)plugins;

- (void)iesll_containerViewDidload;
- (void)iesll_registerAgents;
- (void)iesll_registerExtensions;
- (void)updateGetPOIDetailContainerForPlugin:(id)a0;
- (void).cxx_destruct;
- (id)loadPlugins;

@end
