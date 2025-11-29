@class NSString;

@interface HMDClassCoverageUploader : NSObject <HMDInspectorDiskSpaceDistribution>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)removableFileDirectoryPath;
+ (id)classCoveragePath;
+ (void)cleanFilesInPath:(id)a0;
+ (void)cleanClassCoverageFiles;

- (void)uploadAfterAppLaunched;
- (id)prepareUploadFile:(id)a0;

@end
