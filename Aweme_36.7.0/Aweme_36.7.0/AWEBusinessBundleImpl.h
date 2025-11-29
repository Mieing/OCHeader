@class NSString, AWEBusinessBundleMetadata, AWEBusinessConfiguration;

@interface AWEBusinessBundleImpl : NSObject <AWEBusinessBundle>

@property (retain, nonatomic) AWEBusinessConfiguration *configuration;
@property (nonatomic) long long bundleSize;
@property (readonly, copy, nonatomic) NSString *relativeRootDirectory;
@property (readonly, nonatomic) AWEBusinessBundleMetadata *metadata;
@property (readonly, copy, nonatomic) NSString *rootDirectory;
@property (readonly, copy, nonatomic) NSString *cacheDirectory;
@property (readonly, copy, nonatomic) NSString *tmpDirectory;
@property (readonly, copy, nonatomic) NSString *userDataDirectory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)readBundleMetadataWithPath:(id)a0;

- (id)createTopBusinessLineDirectoryIfNeeded:(id)a0;
- (void)setupBundleWithTopDirectory:(id)a0;
- (void)createMetadata;
- (void)cleanTmpResource;
- (id)domainPath:(unsigned long long)a0;
- (void)trackBundleInfo;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
