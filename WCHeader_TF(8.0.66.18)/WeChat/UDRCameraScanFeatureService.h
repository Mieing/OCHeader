@interface UDRCameraScanFeatureService : IUdrBizFeature

+ (id)projectId:(long long)a0;
+ (BOOL)fileExist:(long long)a0 name:(id)a1;
+ (id)filePath:(long long)a0 name:(id)a1;

- (id)getProjectId;
- (id)getParameter;

@end
