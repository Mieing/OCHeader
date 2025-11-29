@class NSMutableArray, BaseResponse;

@interface RoamBackupPackagesGetResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *backupPackages;

+ (void)initialize;

- (void)setBackupPackages:(id)a0;
- (id)backupPackages;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
