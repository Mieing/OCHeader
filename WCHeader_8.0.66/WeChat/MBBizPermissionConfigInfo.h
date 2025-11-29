@interface MBBizPermissionConfigInfo : NSObject

@property (nonatomic) unsigned long long maxStorageSize;
@property (nonatomic) unsigned long long maxNetWorkFileSizeLimit;
@property (nonatomic) unsigned int maxNetWorkConcurrent;
@property (nonatomic) unsigned int defaultTimeOut;
@property (nonatomic) unsigned long long maxTempFileTotalSize;
@property (nonatomic) unsigned long long maxTempFileSize;
@property (nonatomic) unsigned long long minTempFileSize;
@property (nonatomic) unsigned long long maxUsrFileSize;

- (id)initWithDic:(id)a0;
- (void)loadPermissionConfig:(id)a0;

@end
