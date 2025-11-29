@class NSString, NSDictionary;

@interface CSJADLoadDurationModel : NSObject

@property (nonatomic) double SDKReceiveUnionMetarialsTime;
@property (nonatomic) double SDKFinishParseUnionMetarialsTime;
@property (nonatomic) double APPBeginRequestTime;
@property (nonatomic) double SDKBeginNetworkRequstTime;
@property (nonatomic) double SDKReciveNetworkResponesTime;
@property (nonatomic) double serverProcessingDuration;
@property (nonatomic) double SDKEndNetworkResponesSerializeTime;
@property (nonatomic) long long reqBodyLength;
@property (nonatomic) long long resBodyLength;
@property (nonatomic) BOOL isResourceFromCache;
@property (nonatomic) double SDKBeginResourceRequestTime;
@property (nonatomic) double SDKReciveResourceResponesTime;
@property (nonatomic) double SDKEndResourceCacheTime;
@property (nonatomic) double resourceImageSize;
@property (copy, nonatomic) NSString *resourceImageResolution;
@property (retain, nonatomic) NSDictionary *resourceImageHTTPHeader;
@property (nonatomic) double SDKBeginResourceCacheQueryTime;
@property (copy, nonatomic) NSDictionary *metricData;
@property (nonatomic) double callbackToAPPTime;
@property (nonatomic) double SDKBeginLoadTemplateTime;
@property (nonatomic) double SDKEndLoadTemplateTime;
@property (nonatomic) double SDKBeginRenderTime;
@property (nonatomic) double SDKEndRenderTime;

- (id)splash_native_render_timeDictionary;
- (void)fillImageSizeAndResolutionWithData:(id)a0 image:(id)a1;
- (long long)biddingDurationOfLoadAD;
- (long long)durationOfLoadAD;
- (long long)durationOfLoadADResource;
- (id)detailOfLoadADResource;
- (long long)durationOfLoadADTemplate;
- (long long)durationOfRender;
- (long long)durationOfTotalLoadAD;
- (id)detailOfTotalLoadAD;
- (long long)durationOfLoadADMaterial;
- (id)detailOfLoadADMaterial;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
