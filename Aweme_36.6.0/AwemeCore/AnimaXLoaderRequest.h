@class NSString, NSDictionary;

@interface AnimaXLoaderRequest : NSObject

@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) NSDictionary *requestProperties;

+ (id)requestWithURL:(id)a0 requestProperties:(id)a1;
+ (id)requestWithURL:(id)a0;

- (id)initWithURL:(id)a0 requestProperties:(id)a1;
- (void).cxx_destruct;

@end
