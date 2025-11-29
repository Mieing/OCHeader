@class NSString, NSDictionary, NSURL, NSData;

@interface RequestIOS : NSObject

@property (copy) NSURL *url;
@property (copy) NSString *method;
@property (copy) NSData *body;
@property (copy) NSDictionary *headers;

- (id)init:(id)a0 method:(id)a1 headers:(id)a2 body:(id)a3;
- (id)init:(id)a0 method:(id)a1;
- (id)init:(id)a0 method:(id)a1 headers:(id)a2;
- (id)init:(id)a0;
- (void).cxx_destruct;

@end
