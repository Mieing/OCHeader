@class NSString;

@interface TingPlayAppTaskControllerCpp : UnitRCObjcBaseProxyClass <TingPlayAppTaskController>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)getPlayTaskController;
+ (void)setPlayTaskController:(id)a0;
+ (id)getOrCreatePlayerShutdownController;

- (id)getOrCreatePlayApp:(int)a0;
- (id)getPlayApp:(int)a0;
- (id)playingTask;

@end
