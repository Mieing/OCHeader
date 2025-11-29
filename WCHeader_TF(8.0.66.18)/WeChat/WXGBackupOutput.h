@class NSString, WXGBackupDataInfo, PacketBackupDataPush;

@interface WXGBackupOutput : NSObject

@property (retain, nonatomic) PacketBackupDataPush *dataPush;
@property (retain, nonatomic) WXGBackupDataInfo *backupDataInfo;
@property (nonatomic) unsigned long long outputType;
@property (copy, nonatomic) NSString *sessionName;

- (id)init;
- (unsigned long long)getOutputType;
- (id)getBackupDataPush;
- (void)setBackupDataPush:(id)a0;
- (void)setBakcupDataPushInPath:(id)a0;
- (id)getBackupDataInfo;
- (void).cxx_destruct;

@end
