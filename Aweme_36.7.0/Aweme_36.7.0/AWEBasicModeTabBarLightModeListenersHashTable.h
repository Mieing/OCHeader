@class NSString, NSHashTable;

@interface AWEBasicModeTabBarLightModeListenersHashTable : NSObject <AWEBizTabBarLightModeListenerProtocol>

@property (retain, nonatomic) NSHashTable *listenerHashTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedHashTable;

- (void)switchToLightModeWithProgress:(double)a0;
- (void).cxx_destruct;
- (void)addListener:(id)a0;

@end
