@class NSDictionary;

@interface IESForestTTNetTrackInfo : NSObject

@property (nonatomic) BOOL isNetworkAccessed;
@property (nonatomic) BOOL isCached;
@property (copy, nonatomic) NSDictionary *debugInfo;

+ (id)trackResponseHeaders;

- (id)initWithNSHTTPURLResponse:(id)a0;
- (id)initWithTTResponse:(id)a0;
- (id)getUTCFormateDate:(id)a0;
- (void).cxx_destruct;

@end
