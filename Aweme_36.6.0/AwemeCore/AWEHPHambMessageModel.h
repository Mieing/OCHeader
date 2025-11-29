@class NSDictionary, NSArray, NSString;

@interface AWEHPHambMessageModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *rawData;
@property (nonatomic) long long version;
@property (copy, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemsJSONTransformer;
+ (id)modelWithRawData:(id)a0 error:(id *)a1;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
