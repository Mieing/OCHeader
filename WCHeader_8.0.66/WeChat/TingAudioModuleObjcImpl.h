@class NSRecursiveLock, NSArray, NSString, NSMutableSet;

@interface TingAudioModuleObjcImpl : NSObject <WCAudioModuleDelegate, TingAudioModule>

@property (retain, nonatomic) NSMutableSet *listeners;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSArray *mixAudioModuleSceneList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)audioModuleInterruptionBegin:(id)a0 param:(id)a1;
- (void)setActive:(BOOL)a0 scene:(int)a1 extraData:(id)a2;
- (void)addListener:(id)a0;
- (void)removeListener:(id)a0;
- (void).cxx_destruct;

@end
