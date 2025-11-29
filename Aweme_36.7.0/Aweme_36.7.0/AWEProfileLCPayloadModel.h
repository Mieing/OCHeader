@class NSDictionary, NSString;

@interface AWEProfileLCPayloadModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSDictionary *dataMaps;
@property (copy, nonatomic) NSString *log_id;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataMapsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;

@end
