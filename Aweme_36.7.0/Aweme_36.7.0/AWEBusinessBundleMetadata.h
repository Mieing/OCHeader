@class NSString, AWEPerfResourceCleanConfiguration;

@interface AWEBusinessBundleMetadata : NSObject

@property (copy, nonatomic) NSString *bundlePath;
@property (nonatomic) long long version;
@property (nonatomic) long long thresholdSize;
@property (nonatomic) BOOL generalCleaningEnable;
@property (retain, nonatomic) AWEPerfResourceCleanConfiguration *cleaningConfig;

- (void)writeMetadata;
- (id)initWithBundlePath:(id)a0 businessConfiguration:(id)a1;
- (void)readMetadata;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithBundlePath:(id)a0;

@end
