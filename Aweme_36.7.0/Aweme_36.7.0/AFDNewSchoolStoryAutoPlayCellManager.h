@class NSString, NSMutableDictionary, NSMutableArray;

@interface AFDNewSchoolStoryAutoPlayCellManager : NSObject <AWEModernFeedCellManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *registeredPatterns;
@property (retain, nonatomic) NSMutableArray *asyncRegisteredPatternArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

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
