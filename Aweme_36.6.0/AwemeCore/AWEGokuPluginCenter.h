@class NSLock, NSMutableArray, NSString;

@interface AWEGokuPluginCenter : HTSService <AWEGokuPluginCenterProtocol>

@property (retain, nonatomic) NSMutableArray *allPlugins;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSMutableArray *allTargets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObject:(id)a0;
- (void).cxx_destruct;
- (void)removeObject:(id)a0;
- (id)init;
- (void)removePlugin:(id)a0;
- (void)addPlugin:(id)a0;

@end
