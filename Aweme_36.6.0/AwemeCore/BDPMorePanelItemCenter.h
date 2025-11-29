@class NSMutableDictionary, NSRecursiveLock;

@interface BDPMorePanelItemCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *itemProviderList;
@property (retain, nonatomic) NSMutableDictionary *elementActionProviderList;
@property (retain, nonatomic) NSRecursiveLock *itemProviderLock;

+ (id)keyStringForType:(long long)a0;
+ (void)registerPanelItemProviderClass:(Class)a0 forType:(long long)a1;
+ (id)actionStringForType:(unsigned long long)a0;
+ (id)sharedCenter;

- (void)registerPanelElementAction:(id /* block */)a0 elementType:(unsigned long long)a1;
- (id /* block */)getElementActionWithElementType:(unsigned long long)a0;
- (id)getAllPanelItemsWithUniqueID:(id)a0 extraInfo:(id)a1;
- (void)registerPanelItemProviderClass:(Class)a0 forType:(long long)a1;
- (id)itemsForPanel:(id)a0 uniqueID:(id)a1;
- (id)getAllPanelItemsWithUniqueID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
