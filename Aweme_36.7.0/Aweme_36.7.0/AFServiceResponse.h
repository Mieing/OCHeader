@class NSDictionary, NSString;

@interface AFServiceResponse : NSObject

@property (retain, nonatomic) NSDictionary *payloadDict;
@property (nonatomic) unsigned long long responseCode;
@property (copy, nonatomic) NSString *session;
@property (retain, nonatomic) NSDictionary *result;

+ (id)serviceErrResponse;
+ (id)URLErrResponse;
+ (id)repeatCallResponse;
+ (id)openURLErrResponse;

- (id)payloadFromURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;

@end
