@class NSString, NSData, NSDate;

@interface HybridResourceProvider : NSObject <HybridResourceProtocol>

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
@property (nonatomic) long long processorType;
@property (copy, nonatomic) NSString *res_lineFlagString;
@property (nonatomic) BOOL isGeckoUpdate;
@property (nonatomic) double downloadResourceStart;
@property (nonatomic) double downloadResourceEnd;
@property (nonatomic) double readTemplateLocalStart;
@property (nonatomic) double readTemplateLocalEnd;
@property (nonatomic) BOOL isRequestReused;
@property (nonatomic) BOOL isPreloaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackLoadEventWithProvider:(id)a0 container:(id)a1;
+ (void)doTrackLoadEventWithProvider:(id)a0 container:(id)a1;
+ (id)resourceWithURL:(id)a0;

- (id)cdnUrl;
- (id)originSourceURL;
- (BOOL)isMemory;
- (long long)resourceType;
- (void).cxx_destruct;
- (id)bundle;
- (id)channel;
- (unsigned long long)version;
- (id)resourceData;
- (id)sourceUrl;
- (id)accessKey;
- (id)resourceTypeDescription;
- (id)absolutePath;

@end
