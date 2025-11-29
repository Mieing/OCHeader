@class NSArray, NSString;

@interface AWEHPTopTabTooBrightOptConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSArray *maskConfig;
@property (copy, nonatomic) NSArray *tabConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)maskConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)tabConfigJSONTransformer;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
