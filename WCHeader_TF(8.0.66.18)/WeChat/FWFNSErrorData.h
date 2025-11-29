@class NSString, NSDictionary;

@interface FWFNSErrorData : NSObject

@property (nonatomic) long long code;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSDictionary *userInfo;

+ (id)makeWithCode:(long long)a0 domain:(id)a1 userInfo:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
