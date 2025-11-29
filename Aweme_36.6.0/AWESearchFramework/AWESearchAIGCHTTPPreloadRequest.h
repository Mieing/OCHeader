@class NSString, NSDictionary;

@interface AWESearchAIGCHTTPPreloadRequest : NSObject

@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSDictionary *params;
@property (retain, nonatomic) NSDictionary *headerField;

- (void).cxx_destruct;
- (id)cacheKey;

@end
