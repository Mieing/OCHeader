@class NSArray, NSString;

@interface AWEAntiAddictWeekFreqLimitModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *relieveVideoWeekFC;
@property (copy, nonatomic) NSArray *weakRelieveVideoWeekFC;
@property (copy, nonatomic) NSArray *toastWeekFC;
@property (copy, nonatomic) NSArray *onTimeVideoWeekFC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)relieveVideoWeekFCJSONTransformer;
+ (id)weakRelieveVideoWeekFCJSONTransformer;
+ (id)toastWeekFCJSONTransformer;
+ (id)onTimeVideoWeekFCJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
