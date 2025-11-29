@class CdnTransforProfile, CdnSnsResult, CdnC2cResult, CdnCost, CdnHitCheckResult, NSMutableArray, CdnNetworkProfile, CdnBaseResult, CdnBackupUploadResult;

@interface CdnUploadResult : WXPBGeneratedMessage

@property (retain, nonatomic) CdnBaseResult *base;
@property (retain, nonatomic) CdnC2cResult *c2C;
@property (retain, nonatomic) CdnSnsResult *sns;
@property (retain, nonatomic) CdnHitCheckResult *hit;
@property (retain, nonatomic) NSMutableArray *files;
@property (retain, nonatomic) CdnCost *cost;
@property (retain, nonatomic) CdnNetworkProfile *network;
@property (retain, nonatomic) CdnTransforProfile *transfor;
@property (retain, nonatomic) CdnBackupUploadResult *backup;

+ (void)initialize;

@end
