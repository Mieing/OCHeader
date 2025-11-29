@class NSString;

@interface AWEScanSearchRealTimeFeatureChannelParamsProvider : NSObject <AWESearchRequestParamsProviderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dependKeys;
+ (id)getParamsWithContext:(id)a0 dependKeys:(id)a1;
+ (id)provideKeys;
+ (id)searchSmartPostConfig;
+ (BOOL)enableUploadFeedFeature;
+ (long long)maxFeedFeatureCount;
+ (id)fetchScanSearchFeature;
+ (id)fetchFeedFeature;
+ (double)updateDuration;


@end
