@class NSArray;

@interface BDWebViewTTNetUtil : NSObject

@property (class, readonly, nonatomic) NSArray *ttnetRefErrorURLs;

+ (void)addTTNetBlockList:(id)a0;
+ (id)ttnetResponseTimingInfo:(id)a0;
+ (id)ttnetResponseHeaders:(id)a0;
+ (id)monitorResponseHeaders;
+ (BOOL)isHitTTNetBlockListWithURL:(id)a0;
+ (long long)ttnetAutoBlockListCount;

@end
