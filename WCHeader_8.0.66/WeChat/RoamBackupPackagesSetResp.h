@class NSMutableArray, BaseResponse;

@interface RoamBackupPackagesSetResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *backupPackages;
@property (nonatomic) BOOL versionConflict;

+ (void)initialize;

@end
