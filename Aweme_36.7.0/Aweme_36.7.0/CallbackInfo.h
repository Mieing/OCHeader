@class NSError, TTHttpResponse;

@interface CallbackInfo : NSObject

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) id obj;
@property (retain, nonatomic) TTHttpResponse *response;

- (id)initWithError:(id)a0 obj:(id)a1 response:(id)a2;
- (void).cxx_destruct;

@end
