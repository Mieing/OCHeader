@class AWEHPRealTimeActivityResourceModel, AWEHPRealTimeActivityInfo;

@interface AWEHPCommonActivityBatchInfo : NSObject

@property (retain, nonatomic) AWEHPRealTimeActivityResourceModel *dynamicInfo;
@property (retain, nonatomic) AWEHPRealTimeActivityInfo *backupInfo;

- (id)initWithDynamicInfo:(id)a0 backupInfo:(id)a1;
- (BOOL)isSameChannelInfo:(id)a0;
- (long long)getVersionID;
- (id)getChannelInfo;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
