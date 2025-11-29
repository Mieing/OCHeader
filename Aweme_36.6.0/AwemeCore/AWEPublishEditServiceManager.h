@class ACCThreadSafeMutableDictionary, NSString;

@interface AWEPublishEditServiceManager : NSObject <AWEPublishEditServiceManagerProtocol>

@property (retain, nonatomic) ACCThreadSafeMutableDictionary *usedServiceDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeEditServices;
- (void)dequeueEditServiceWithWorkspace:(id)a0 index:(long long)a1 useScene:(long long)a2 completion:(id /* block */)a3;
- (void)enqueueEditService:(id)a0 useScene:(long long)a1;
- (id)usedKeyOfEditServiceWithIndex:(long long)a0 projectUUID:(id)a1;
- (void)removeEditServiceIfNeededWithCurrentIndex:(long long)a0 currentUsedKey:(id)a1;
- (id)fetchAvailableServiceWithIndex:(long long)a0 projectUUID:(id)a1 useScene:(long long)a2;
- (void)applyPublishCanvasStateWithProject:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
