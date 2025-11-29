@class NSString, IESLiveResouceBundle;

@interface IESLiveResouceManager : NSObject <IESLiveResouceManagerProtocol>

@property (weak, nonatomic) IESLiveResouceBundle *assetBundle;
@property (copy, nonatomic) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithAssetBundle:(id)a0 forType:(id)a1;
+ (id)assetManagerClassesForType:(id)a0;
+ (void)registerAssetManagerClass:(Class)a0 forType:(id)a1;

- (id)initWithAssetBundle:(id)a0 type:(id)a1;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;

@end
