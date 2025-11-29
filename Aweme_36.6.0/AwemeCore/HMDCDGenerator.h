@class HMDCDUploader;

@interface HMDCDGenerator : HeimdallrModule

@property (readonly, nonatomic) HMDCDUploader *uploader;

+ (id)sharedGenerator;

- (void)updateConfig:(id)a0;
- (BOOL)needSyncStart;
- (void)triggerUpload;
- (void)prepareCoreDump;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;
- (BOOL)diskSpaceAvailable;

@end
