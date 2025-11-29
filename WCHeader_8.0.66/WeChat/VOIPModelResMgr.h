@class NSString;

@interface VOIPModelResMgr : MMUserService <MMResourceMgrExt, MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)VOIPDir;
+ (id)modelDir;
+ (id)modelPathWithName:(id)a0;
+ (void)modelSaveWithName:(unsigned int)a0 subType:(unsigned int)a1 modelName:(id)a2;
+ (id)resFileMd5:(int)a0 subtype:(int)a1;
+ (void)modelSaveEntry:(int)a0 subtype:(int)a1;
+ (void)newAddModelResave:(unsigned int)a0 subType:(unsigned int)a1 modelName:(id)a2;

@end
