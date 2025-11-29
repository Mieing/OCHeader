@class BDXResourceLoaderMetricModel, NSString, NSData, UIImage;

@interface BDXLynxResource : NSObject <BDXResourceProtocol>

@property (copy, nonatomic) NSString *channelName;
@property (copy, nonatomic) NSString *bundleName;
@property (nonatomic) unsigned long long version;
@property (nonatomic) long long sourceFrom;
@property (copy, nonatomic) NSString *originSourceURL;
@property (copy, nonatomic) NSString *localPath;
@property (retain, nonatomic) NSData *resData;
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

+ (id)resourceWithURL:(id)a0;

- (id)cdnUrl;
- (long long)resourceType;
- (void).cxx_destruct;
- (id)bundle;
- (id)channel;
- (id)resourceData;
- (id)sourceUrl;
- (id)accessKey;
- (id)absolutePath;

@end
