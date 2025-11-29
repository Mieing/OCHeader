@class NSString, NSDictionary;

@interface HMGlobalConfig : NSObject

@property (nonatomic) BOOL enableRawUpload;
@property (nonatomic) BOOL useSettingsV5;
@property (copy, nonatomic) NSString *hostAid;
@property (copy, nonatomic) NSString *defaultHost;
@property (nonatomic) unsigned long long maxStoreSize;
@property (nonatomic) double maxStoreTime;
@property (nonatomic) unsigned long long maxFileSize;
@property (nonatomic) unsigned long long maxLogNumber;
@property (nonatomic) unsigned long long maxReportSize;
@property (nonatomic) double reportInterval;
@property (nonatomic) unsigned long long limitReportSize;
@property (nonatomic) double limitReportInterval;
@property (copy, nonatomic) NSDictionary *localSettings;

- (void).cxx_destruct;

@end
