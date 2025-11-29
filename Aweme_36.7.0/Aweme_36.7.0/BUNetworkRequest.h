@class NSString, NSDictionary;

@interface BUNetworkRequest : BUBaseRequest

@property (copy, nonatomic) NSString *buRequestUrl;
@property (retain, nonatomic) NSDictionary *parameter;
@property (nonatomic) long long method;
@property (nonatomic) long long buRequestSerializerType;
@property (nonatomic) long long buResponseSerializerType;

+ (id)requestWithURL:(id)a0 parameter:(id)a1 completionWithSuccess:(id /* block */)a2 failure:(id /* block */)a3;
+ (id)requestWithURL:(id)a0 method:(long long)a1 parameter:(id)a2 completionWithSuccess:(id /* block */)a3 failure:(id /* block */)a4;

- (id)requestArgument;
- (long long)requestSerializerType;
- (long long)responseSerializerType;
- (id)initWithUrl:(id)a0 method:(long long)a1 parameter:(id)a2;
- (id /* block */)failureCompletionBlockWithTNC;
- (id /* block */)successCompletionBlockWithTNC;
- (id)TNCServiceKey;
- (void).cxx_destruct;
- (id)requestUrl;
- (long long)requestMethod;

@end
