@class NSString, NSDictionary, NSArray;

@interface BDPClientAIDetectionModel : BDPBasePluginModel

@property (copy, nonatomic) NSString *spuId;
@property (copy, nonatomic) NSString *pagePath;
@property (copy, nonatomic) NSString *pathOfPage;
@property (nonatomic) double pathInvalidTime;
@property (nonatomic) long long state;
@property (nonatomic) double invalidTime;
@property (copy, nonatomic) NSDictionary *strategy;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *storeId;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *schemaUrlString;
@property (nonatomic) double extractDuration;
@property (nonatomic) double inputExtractDuration;
@property (nonatomic) double shotDuration;
@property (nonatomic) double openURLTime;
@property (copy, nonatomic) NSString *deviceInfo;
@property (copy, nonatomic) NSString *pathName;
@property (copy, nonatomic) NSString *queryString;
@property (copy, nonatomic) NSDictionary *queryDict;
@property (nonatomic) double businessExecuteDuration;
@property (nonatomic) double startTime;
@property (copy, nonatomic) NSString *errMsg;
@property (nonatomic) double authDuration;
@property (nonatomic) double uploadDuration;
@property (retain, nonatomic) NSDictionary *outputDict;
@property (copy, nonatomic) NSString *h5WebViewUrl;
@property (copy, nonatomic) NSString *webViewText;
@property (copy, nonatomic) NSArray *inputText;
@property (copy, nonatomic) NSString *pageHashStr;
@property (copy, nonatomic) NSString *businessScene;
@property (nonatomic) BOOL isHostWebview;

- (void)updateWithCacheTime:(double)a0 pathCacheTime:(double)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
