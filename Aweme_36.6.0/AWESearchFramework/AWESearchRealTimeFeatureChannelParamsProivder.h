@class NSString;

@interface AWESearchRealTimeFeatureChannelParamsProivder : NSObject <AWESearchRequestParamsProviderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dependKeys;
+ (id)getParamsWithContext:(id)a0 dependKeys:(id)a1;
+ (id)provideKeys;
+ (BOOL)enableCotUploadFeedFeature;
+ (long long)maxCotFeedFeatureCount;
+ (id)fetchGeneralSearchFeature;
+ (id)searchSmartPostConfig;
+ (BOOL)enableUploadFeedFeature;
+ (long long)maxFeedFeatureCount;
+ (id)fetchFeedFeatureWithMaxCount:(double)a0;
+ (id)fetchSearchFeatureWithScene:(id)a0;
+ (double)updateDuration;


@end
