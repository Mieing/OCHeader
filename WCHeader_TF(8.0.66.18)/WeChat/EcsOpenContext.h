@class UINavigationController, EcsOpenContextIOSData, NSDictionary, EcsOpenContextData, EcsOpenHook;
@protocol EcsCoreEcsOpenContext_Ur;

@interface EcsOpenContext : NSObject

@property (readonly, nonatomic) EcsOpenContextIOSData *iosData;
@property (readonly, nonatomic) id<EcsCoreEcsOpenContext_Ur> urObject;
@property (readonly, nonatomic) EcsOpenContextData *data;
@property (copy, nonatomic) id /* block */ eventAction;
@property (retain, nonatomic) NSDictionary *extraData;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) EcsOpenHook *hook;

+ (id)create:(id)a0;
+ (id)createByUrObject:(id)a0;

- (id)initWithUrObject:(id)a0;
- (id)init;
- (void)addOrReplaceExtraDataInfo:(id)a0;
- (void)wxa_addOrReplaceExtraParamInfo:(id)a0;
- (void)liteApp_addOrReplaceQuery:(id)a0;
- (void)updateJsonParamWithKey:(id)a0 value:(id)a1;
- (id)getJsonParamByKey:(id)a0;
- (id)jsonParamMap;
- (void).cxx_destruct;

@end
