@class NSString, NSDictionary;

@interface BizTransferResponse : NSObject

@property (nonatomic) BOOL success;
@property (nonatomic) long long code;
@property (copy, nonatomic) NSString *msg;
@property (copy, nonatomic) NSString *data;
@property (copy, nonatomic) NSDictionary *respHeaders;

+ (id)makeWithSuccess:(BOOL)a0 code:(long long)a1 msg:(id)a2 data:(id)a3 respHeaders:(id)a4;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
