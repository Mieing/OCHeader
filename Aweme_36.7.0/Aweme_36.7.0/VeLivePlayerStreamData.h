@class NSDictionary, NSArray;

@interface VeLivePlayerStreamData : NSObject

@property (copy, nonatomic) NSDictionary *userSettings;
@property (nonatomic) BOOL enableABR;
@property (nonatomic) BOOL enableMainBackupSwitch;
@property (nonatomic) long long defaultResolution;
@property (nonatomic) long long defaultFormat;
@property (nonatomic) long long defaultProtocol;
@property (copy, nonatomic) NSArray *mainStream;
@property (copy, nonatomic) NSArray *backupStream;

- (id)getUserPropertyValue:(id)a0;
- (id)generateSdkParams:(id)a0;
- (id)generateNewDefaultFlvDegradeStreamIfNeed:(id)a0;
- (id)addFormatList:(id)a0 streamData:(id)a1;
- (BOOL)hasFlvDegradeForRTMStream:(id)a0 resolution:(long long)a1;
- (void)checkStreamDataValidity;
- (id)generateResolutionData:(id)a0;
- (id)generatePlayerItemWithUserSettings:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
