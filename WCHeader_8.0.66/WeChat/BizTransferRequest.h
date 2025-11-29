@class NSString, NSDictionary;

@interface BizTransferRequest : NSObject

@property (copy, nonatomic) NSString *h5Url;
@property (copy, nonatomic) NSString *scope;
@property (copy, nonatomic) NSString *cgiUrl;
@property (nonatomic) long long method;
@property (copy, nonatomic) NSDictionary *reqHeaders;
@property (copy, nonatomic) NSString *reqBody;

+ (id)makeWithH5Url:(id)a0 scope:(id)a1 cgiUrl:(id)a2 method:(long long)a3 reqHeaders:(id)a4 reqBody:(id)a5;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
