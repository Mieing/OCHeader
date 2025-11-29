@class NSString, NSMutableDictionary, NSHashTable;

@interface AWEShowMonetizePopup : NSObject <AWEShowMonetizePopupService>

@property (retain, nonatomic) NSHashTable *handlers;
@property (retain, nonatomic) NSMutableDictionary *popupTaskQueuesByName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getHandlersForQueueName:(id)a0;
- (void)addPopupHandler:(id)a0;
- (void)removePopupHandler:(id)a0;
- (id)createPopupTaskQueueWithName:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
