@interface VOIPModelUDRMgr : IUdrBizFeature

+ (id)VOIPDir;
+ (id)modelDir;
+ (id)modelPathWithName:(id)a0;
+ (id)resFileMd5:(id)a0;
+ (id)modelBaseName:(id)a0;
+ (void)modelSaveWithName:(id)a0 originPath:(id)a1;

- (id)getProjectId;
- (void)postProcess:(id)a0;
- (void)haveSpecifiedResource:(id)a0 name:(id)a1 version:(unsigned int)a2;

@end
