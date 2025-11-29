@class PIAMessageHash, Protocol;

@interface PIAMessage : NSObject

@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
@property (nonatomic) unsigned int methodCount;
@property (nonatomic) struct objc_method_description { SEL x0; char *x1; } *methods;
@property (retain, nonatomic) Protocol *messageKey;
@property (retain, nonatomic) PIAMessageHash *hashObserver;

- (void)unregisterMessage:(id)a0;
- (void)registerMessage:(id)a0;
- (struct vector<objc_method_description, std::allocator<objc_method_description>> { struct objc_method_description *x0; struct objc_method_description *x1; struct objc_method_description *x2; })getAllMethodOfProtocol:(id)a0;
- (id)getObserversArrayForMessageKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0;

@end
