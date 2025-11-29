@class BDXResourceLoaderMetricModel, NSString, NSData, NSDate, UIImage;

@interface BDXResourceProvider : NSObject <BDXResourceProtocol>

@property (copy, nonatomic) NSString *res_accessKey;
@property (copy, nonatomic) NSString *res_channelName;
@property (copy, nonatomic) NSString *res_bundleName;
@property (nonatomic) unsigned long long res_version;
@property (retain, nonatomic) NSData *res_Data;
@property (nonatomic) long long res_sourceFrom;
@property (copy, nonatomic) NSString *res_originSourceURL;
@property (copy, nonatomic) NSString *res_sourceURL;
@property (copy, nonatomic) NSString *res_localPath;
@property (copy, nonatomic) NSString *res_cdnUrl;
@property (retain, nonatomic) NSDate *expireDate;
@property (copy, nonatomic) NSString *res_lineFlagString;
@property (copy) NSString *cacheKey;
@property (copy) NSString *res_offlineRule;
@property (retain, nonatomic) BDXResourceLoaderMetricModel *metricInfo;
@property (nonatomic) BOOL isGeckoUpdate;
@property (nonatomic) double downloadResourceStart;
@property (nonatomic) double downloadResourceEnd;
@property (nonatomic) double readTemplateLocalStart;
@property (nonatomic) double readTemplateLocalEnd;
@property (copy, nonatomic) NSString *resFrom;
@property (retain, nonatomic) UIImage *resourceImage;
@property (nonatomic) BOOL isFromMemory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackLoadEventWithProvider:(id)a0 container:(id)a1;
+ (void)doTrackLoadEventWithProvider:(id)a0 container:(id)a1;
+ (id)resourceWithURL:(id)a0;

- (id)cdnUrl;
- (id)resourceFrom;
- (id)offlineRule;
- (id)originSourceURL;
- (long long)resourceType;
- (void).cxx_destruct;
- (id)bundle;
- (id)channel;
- (unsigned long long)version;
- (id)init;
- (id)resourceData;
- (id)sourceUrl;
- (id)accessKey;
- (id)absolutePath;

@end
