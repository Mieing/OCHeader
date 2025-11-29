@class NSString;

@interface SAMICore_WakeupFingerprintInitParameter : SAMICore_ServerCommonContextCreateParameter

@property (retain, nonatomic) NSString *model_path;
@property (retain, nonatomic) NSString *sid_dir;
@property (retain, nonatomic) NSString *uid;
@property (retain, nonatomic) NSString *fw_engine_version;

- (void)dealloc;

@end
