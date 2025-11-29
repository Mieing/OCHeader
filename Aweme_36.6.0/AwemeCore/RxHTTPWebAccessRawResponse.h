@class NSData, NSURLResponse;

@interface RxHTTPWebAccessRawResponse : NSObject

@property (readonly, nonatomic) NSURLResponse *response;
@property (readonly, nonatomic) NSData *data;

+ (id)networkResponseWithURLResponse:(id)a0 data:(id)a1;

- (void).cxx_destruct;
- (id)initWithURLResponse:(id)a0 data:(id)a1;

@end
