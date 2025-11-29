@class NSArray, NSString;

@interface BSTCheckConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *events;
@property (retain, nonatomic) NSArray *patterns;
@property (retain, nonatomic) NSArray *globalWhiteParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)patternsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
