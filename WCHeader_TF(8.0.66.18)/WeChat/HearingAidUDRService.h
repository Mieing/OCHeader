@interface HearingAidUDRService : IUdrBizFeature

+ (id)projectId;
+ (id)resourceName;
+ (BOOL)handlePostProcess:(id)a0;

- (id)getProjectId;
- (void)postProcess:(id)a0;

@end
