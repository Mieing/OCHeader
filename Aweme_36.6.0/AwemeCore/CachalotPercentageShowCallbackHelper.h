@class NSMapTable;

@interface CachalotPercentageShowCallbackHelper : NSObject

@property (retain, nonatomic) NSMapTable *upCallbackCache;
@property (retain, nonatomic) NSMapTable *upOnceCallbackCache;
@property (retain, nonatomic) NSMapTable *downCallbackCache;
@property (retain, nonatomic) NSMapTable *downOnceCallbackCache;
@property (nonatomic) BOOL disableTrigger;

- (id)p_keyForViewModel:(id)a0;
- (id)p_callbackCache:(BOOL)a0 status:(unsigned long long)a1;
- (void)registerCallbackWithViewModel:(id)a0 forPercentages:(id)a1 shouldOnlyCallOnce:(BOOL)a2 status:(unsigned long long)a3;
- (void)registerCallbackWithViewModel:(id)a0 forPercentages:(id)a1 status:(unsigned long long)a2;
- (void)unregisterAllCallbackWithViewModel:(id)a0;
- (id)shouldCallAtPercentage:(double)a0 forViewModel:(id)a1 status:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)init;

@end
