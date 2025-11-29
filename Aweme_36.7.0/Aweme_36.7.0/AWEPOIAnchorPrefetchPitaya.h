@class NSMutableDictionary;

@interface AWEPOIAnchorPrefetchPitaya : NSObject

@property (class, retain, nonatomic) NSMutableDictionary *preLoadInfo;
@property (class, retain, nonatomic) NSMutableDictionary *poiLocalLifePreloadInfo;

+ (void)registerPitayaMessageHandler;
+ (void)runPOIAnchorPrefetchTask:(id)a0;

@end
