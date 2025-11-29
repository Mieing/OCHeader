@class NSString, NSMutableDictionary, NSMutableArray;

@interface AWEModernFeedCellManager : NSObject <BCAABundleListener, AWEModernFeedCellManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *registeredPatterns;
@property (retain, nonatomic) NSMutableArray *asyncRegisteredPatternArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (id)sharedInstance;

- (void)bundleDidActived:(id)a0 machoHeader:(struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)a1 fromBundle:(id)a2 enterTag:(id)a3 cost:(double)a4;
- (id)cellTypeForItem:(id)a0;
- (Class)controllerClassForType:(id)a0;
- (void)registerControllerClass:(Class)a0 itemPredicateBlock:(id /* block */)a1 isStatic:(BOOL)a2;
- (id)lazyLoadedRegisteredPatterns;
- (id)cellTypeForItemRegisterIfNeeded:(id)a0;
- (id)dynamicCellTypes;
- (id)accessoryTypeForCellType:(id)a0;
- (Class)attachmentControllerClass;
- (void)registerControllerClass:(Class)a0 itemPredicateBlock:(id /* block */)a1;
- (void)registerControllerClass:(Class)a0 itemPredicateBlock:(id /* block */)a1 asyncCellTypeBlock:(id /* block */)a2;
- (void)registerControllerClass:(Class)a0 forStaticType:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)allTypes;

@end
