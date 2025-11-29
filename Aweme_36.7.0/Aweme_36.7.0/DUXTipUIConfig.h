@class NSString, DUXTipUIConfigModel;

@interface DUXTipUIConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) DUXTipUIConfigModel *normal;
@property (retain, nonatomic) DUXTipUIConfigModel *middle;
@property (retain, nonatomic) DUXTipUIConfigModel *large;
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
- (void)updateWithConfigIfNeed;
- (void)setupWithDefault;
- (void)setupWithDefaultOld;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)init;
- (void)setup;

@end
