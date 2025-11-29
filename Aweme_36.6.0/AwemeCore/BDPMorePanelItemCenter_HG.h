@class NSString, NSMutableDictionary, NSRecursiveLock;

@interface BDPMorePanelItemCenter_HG : NSObject <BDPAppInterfaceOrientationChangeMessage>

@property (retain, nonatomic) NSMutableDictionary *itemProviderList;
@property (retain, nonatomic) NSRecursiveLock *itemProviderLock;
@property (copy, nonatomic) id /* block */ deferAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyStringForType:(long long)a0;
+ (void)registerPanelItemProviderClass:(Class)a0 forType:(long long)a1;
+ (BOOL)itemSupportLandscape;
+ (id)sharedCenter;

- (void)interfaceOrientationChange:(id)a0 targetOrientation:(long long)a1 uniqueID:(id)a2;
- (void)updateMonitorWithItems:(id)a0 uniqueID:(id)a1;
- (void)registerPanelItemProviderClass:(Class)a0 forType:(long long)a1;
- (id)itemsForPanel:(id)a0 uniqueID:(id)a1;
- (id)getAllPanelItemsWithUniqueID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
