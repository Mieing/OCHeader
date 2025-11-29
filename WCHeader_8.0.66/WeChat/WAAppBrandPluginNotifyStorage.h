@class NSString, NSMutableDictionary;

@interface WAAppBrandPluginNotifyStorage : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableDictionary *dicPluginNotify;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_dicPluginNotify;
+ (void)initialize;
+ (id)loadStorageFromPath:(id)a0;
+ (BOOL)saveStorage:(id)a0 toPath:(id)a1;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
