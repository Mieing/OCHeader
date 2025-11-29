@class NSString, NSMutableDictionary, SECMetrics, NSDictionary;

@interface SECSchemaValidateResult : NSObject

@property (retain, nonatomic) NSMutableDictionary *mutableCustomInfo;
@property (nonatomic) BOOL success;
@property (copy, nonatomic) NSString *failReason;
@property (copy, nonatomic) NSString *failDetailReason;
@property (copy, nonatomic) NSString *matchKey;
@property (retain, nonatomic) SECMetrics *metrics;
@property (readonly, nonatomic) NSDictionary *customInfo;

- (void)addCustomKey:(id)a0 withValue:(id)a1;
- (void).cxx_destruct;

@end
