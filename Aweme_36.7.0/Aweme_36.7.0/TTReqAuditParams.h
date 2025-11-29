@class NSURL, NSDictionary;

@interface TTReqAuditParams : NSObject

@property (copy) NSURL *URL;
@property (copy) NSDictionary *allHTTPHeaderFields;

- (id)initWithURL:(id)a0 allHTTPHeaderFields:(id)a1;
- (void).cxx_destruct;

@end
