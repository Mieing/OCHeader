@class HMDDiskGetDirSizeConfig;

@interface HMDDiskGetDirSizeManager : NSObject {
    struct hmddisk_path_element { char *x0; BOOL x1; BOOL x2; BOOL x3; char *x4; unsigned long long x5; unsigned long long x6; } *_pathElements;
    unsigned long long _pathElementsValidNum;
    struct hmd_disk_request_params { long long x0; long long x1; id /* block */ x2; long long x3; id /* block */ x4; id /* block */ x5; } *_request_params;
}

@property (retain, nonatomic) HMDDiskGetDirSizeConfig *config;
@property BOOL isFinishCalculate;

- (void)recalculate;
- (long long)occupiedDiskSize;
- (void).cxx_destruct;
- (long long)fileSize;
- (id)init;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end
