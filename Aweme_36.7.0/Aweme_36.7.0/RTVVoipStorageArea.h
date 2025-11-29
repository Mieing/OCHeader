@class NSString;
@protocol RTVStorageArea, RxInjector, RTVStorage;

@interface RTVVoipStorageArea : NSObject <RTVVoipStorageAreaInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (retain) id<RTVStorageArea> storageArea;
@property (readonly, nonatomic) id<RTVStorage> storageManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (id)areaWithNamed:(id)a0;
- (id)asyncSetObject:(id)a0 forKey:(id)a1;
- (id)queryObjectForKey:(id)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;

@end
