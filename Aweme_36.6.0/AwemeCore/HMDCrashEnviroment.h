@class NSString;

@interface HMDCrashEnviroment : NSObject

@property (class, readonly, nonatomic) NSString *kernelOSVersion;

+ (void)createFileEnvironment;
+ (void)writeMetadata;
+ (void)setupAsyncUtil;
+ (id)createMetaData;
+ (void)setup;
+ (id)metaDict;

@end
