@class NSArray, NSString;

@interface AWEClueStoreBackgroundModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long backgroundType;
@property (copy, nonatomic) NSArray *backgroundList;
@property (copy, nonatomic) NSString *clueLogExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)backgroundListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
