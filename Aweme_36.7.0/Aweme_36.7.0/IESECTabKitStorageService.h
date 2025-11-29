@class NSString, NSMutableDictionary;

@interface IESECTabKitStorageService : IESECTabKitService <IESECTabKitStorageService> {
    NSMutableDictionary *_storageDict;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)SetSharedValue:(id)a0 forKey:(id)a1;
- (id)sharedValueForKey:(id)a0;
- (void)ObserveSharedValueForKey:(id)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
