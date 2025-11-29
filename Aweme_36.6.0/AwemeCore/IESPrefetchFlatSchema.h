@class NSDictionary, NSURL, NSString;

@interface IESPrefetchFlatSchema : NSObject

@property (copy, nonatomic) NSDictionary *queryItems;
@property (copy, nonatomic) NSDictionary *pathVariables;
@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *fragment;

+ (id)schemaWithURL:(id)a0;

- (void)resolveHashAndQuery:(id)a0;
- (id)dictFromQueryString:(id)a0;
- (id)urlString;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;

@end
