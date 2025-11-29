@interface AWEVideoMergeHelper : NSObject

+ (void)updateParamModuleWithSize:(struct CGSize { double x0; double x1; })a0;
+ (void)resetParamModule;
+ (void)videoComposeStartTrack:(id)a0 editService:(id)a1;
+ (void)mergeSpeedTrackWithStatus:(long long)a0 interval:(double)a1 fileSize:(long long)a2;
+ (long long)getFileSize:(id)a0 error:(id *)a1;

@end
