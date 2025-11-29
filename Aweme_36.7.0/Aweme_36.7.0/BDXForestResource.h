@class BDXResourceLoaderMetricModel, NSString, IESForestResponse, UIImage;

@interface BDXForestResource : NSObject <BDXResourceProtocol>

@property (retain, nonatomic) IESForestResponse *response;
@property (retain, nonatomic) BDXResourceLoaderMetricModel *metricInfo;
@property (nonatomic) BOOL isGeckoUpdate;
@property (copy, nonatomic) NSString *resFrom;
@property (copy, nonatomic) NSString *channel;
@property (nonatomic) unsigned long long version;
@property (nonatomic) double downloadResourceStart;
@property (nonatomic) double downloadResourceEnd;
@property (nonatomic) double readTemplateLocalStart;
@property (nonatomic) double readTemplateLocalEnd;
@property (retain, nonatomic) UIImage *resourceImage;
@property (nonatomic) BOOL isFromMemory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resourceWithResponse:(id)a0;
+ (id)resourceWithURL:(id)a0;

- (id)cdnUrl;
- (id)resourceFrom;
- (id)originSourceURL;
- (long long)resourceType;
- (void).cxx_destruct;
- (id)bundle;
- (id)resourceData;
- (id)sourceUrl;
- (id)accessKey;
- (id)absolutePath;

@end
