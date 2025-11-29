@class NSString, AWEStorage, NSOperationQueue;
@protocol RxInjector, RTVUserProfileManagerInterface;

@interface __RTVStorageInterfaceIMP : NSObject <RTVStorageArea>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) AWEStorage *storage;
@property (readonly, nonatomic) NSOperationQueue *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)asyncSetObject:(id)a0 forKey:(id)a1;
- (id)asyncObjectForKey:(id)a0;
- (id)__differentiateKey:(id)a0;
- (id)asyncSetObject:(id)a0;
- (id)asyncContainsObject:(id)a0;
- (id)asyncSetObjects:(id)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (BOOL)removeAllObjects;
- (id)setObjects:(id)a0;
- (BOOL)containsObject:(id)a0;
- (BOOL)setObject:(id)a0;
- (BOOL)setObject:(id)a0 forKey:(id)a1;
- (id)initWithDomain:(id)a0 queue:(id)a1;

@end
