@class NSDictionary;

@interface RTVJetResponse : NSObject

@property (readonly, nonatomic) long long statusCode;
@property (readonly, copy, nonatomic) NSDictionary *headerFields;
@property (readonly, nonatomic) id value;

+ (id)responseWithStatusCode:(long long)a0 headerFields:(id)a1 value:(id)a2;

- (id)initWithStatusCode:(long long)a0 headerFields:(id)a1 value:(id)a2;
- (void).cxx_destruct;

@end
