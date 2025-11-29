@class NSURLResponse;

@interface RxJSONResponse : NSObject

@property (readonly, nonatomic) NSURLResponse *response;
@property (readonly, nonatomic) id JSONValue;

+ (id)responseWithURLResponse:(id)a0 JSONValue:(id)a1;

- (id)initWithURLResponse:(id)a0 JSONValue:(id)a1;
- (void).cxx_destruct;

@end
