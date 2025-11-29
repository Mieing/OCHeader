@class NSMutableDictionary, NSRecursiveLock;

@interface BDUGLocationServiceCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *p_protocolToObjectMap;
@property (retain, nonatomic) NSMutableDictionary *p_protocolToClassMap;
@property (retain, nonatomic) NSRecursiveLock *p_lock;

+ (id)getObjectWithProtocol:(id)a0;
+ (Class)getClassWithProtocol:(id)a0;
+ (void)willStartLocationKit;
+ (void)bindClass:(Class)a0 toProtocol:(id)a1;
+ (BOOL)checkSelector:(SEL)a0 withProtocol:(id)a1 assert:(BOOL)a2;
+ (BOOL)checkClassSelector:(SEL)a0 withProtocol:(id)a1 assert:(BOOL)a2;
+ (id)sharedInstance;

- (void)_bindClass:(Class)a0 toProtocol:(id)a1;
- (id)_getObjectWithProtocol:(id)a0;
- (Class)_getClassWithProtocol:(id)a0;
- (BOOL)_checkSelector:(SEL)a0 withProtocol:(id)a1 assert:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;

@end
