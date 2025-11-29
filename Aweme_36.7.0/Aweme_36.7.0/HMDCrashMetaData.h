@class NSString;

@interface HMDCrashMetaData : HMDCrashModel

@property (copy, nonatomic) NSString *arch;
@property (copy, nonatomic) NSString *deviceModel;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *bundleVersion;
@property (copy, nonatomic) NSString *osVersion;
@property (copy, nonatomic) NSString *osFullVersion;
@property (copy, nonatomic) NSString *osBuildVersion;
@property (copy, nonatomic) NSString *UUID;
@property (copy, nonatomic) NSString *processName;
@property (nonatomic) unsigned long long processID;
@property (nonatomic) double startTime;
@property (copy, nonatomic) NSString *bundleID;
@property (nonatomic) unsigned long long physicalMemory;
@property (copy, nonatomic) NSString *sdkVersion;
@property (copy, nonatomic) NSString *commitID;
@property (copy, nonatomic) NSString *buildJobID;
@property (nonatomic) BOOL isAppExtension;
@property (copy, nonatomic) NSString *appExtensionType;
@property (nonatomic) BOOL isMacARM;
@property (nonatomic) unsigned long long exceptionMainAddress;

- (void).cxx_destruct;
- (void)updateWithDictionary:(id)a0;

@end
