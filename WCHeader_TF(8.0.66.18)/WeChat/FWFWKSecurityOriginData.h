@class NSString;

@interface FWFWKSecurityOriginData : NSObject

@property (copy, nonatomic) NSString *host;
@property (nonatomic) long long port;
@property (copy, nonatomic) NSString *protocol;

+ (id)makeWithHost:(id)a0 port:(long long)a1 protocol:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
