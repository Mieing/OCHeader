@class NSString, NSArray, NSDictionary;

@interface BDATEventModel : NSObject

@property (copy, nonatomic) NSString *timestamp;
@property (nonatomic) long long tryTimes;
@property (nonatomic) long long failureTimes;
@property (copy, nonatomic) NSArray *urls;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *cid;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) BOOL nonstandard;
@property (nonatomic) double expireTime;
@property (copy, nonatomic) NSDictionary *extraData;
@property (copy, nonatomic) NSArray *tokens;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)toDictionary;
- (BOOL)isEqual:(id)a0;

@end
