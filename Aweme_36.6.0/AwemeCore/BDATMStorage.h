@class NSMutableDictionary, NSRecursiveLock;

@interface BDATMStorage : NSObject

@property (retain) NSRecursiveLock *lock;
@property (retain, nonatomic) NSMutableDictionary *dictionary;

+ (id)storage;

- (id)paramsForEventName:(id)a0;
- (id)paramsForEventName:(id)a0 forVariableKey:(id)a1;
- (void)setAtmParams:(id)a0 forKey:(id)a1 forEventName:(id)a2;
- (id)paramsForKey:(id)a0 forEventName:(id)a1;
- (void)setAtmParams:(id)a0 forKey:(id)a1 forEventName:(id)a2 forVariableKey:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
