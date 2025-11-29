@class AWESnackbarUIConfigModel, NSString, AWEFamiliarSceneUndertakeStrategyModel;

@interface AWESceneUndertakeStrategyModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEFamiliarSceneUndertakeStrategyModel *familiarSceneConfig;
@property (retain, nonatomic) AWESnackbarUIConfigModel *snackbarConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
