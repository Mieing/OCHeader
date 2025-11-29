@class DUXNavigationBarConfigModel, NSString;

@interface DUXNavigationBarConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) DUXNavigationBarConfigModel *normal;
@property (retain, nonatomic) DUXNavigationBarConfigModel *middle;
@property (retain, nonatomic) DUXNavigationBarConfigModel *large;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)largeJSONTransformer;
+ (id)normalJSONTransformer;
+ (id)middleJSONTransformer;
+ (id)sharedInstance;
+ (id)JSONKeyPathsByPropertyKey;

- (id)configWithEnlargeType:(unsigned long long)a0;
- (void)setupWithDefault;
- (void)setupWithDefaultOld;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
