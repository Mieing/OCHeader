@class NSString, NSMutableDictionary;

@interface WAAppBrandNotifyStorage : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableDictionary *dicAppNotify;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_dicAppNotify;
+ (void)initialize;
+ (id)loadStorageFromPath:(id)a0;
+ (BOOL)saveStorage:(id)a0 toPath:(id)a1;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
