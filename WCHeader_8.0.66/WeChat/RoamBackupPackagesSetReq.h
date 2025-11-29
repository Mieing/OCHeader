@class BaseRequest, NSMutableArray;

@interface RoamBackupPackagesSetReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int op;
@property (retain, nonatomic) NSMutableArray *backupPackages;

+ (void)initialize;

@end
