@class NSString, DUXButtonUIConfigModel;

@interface DUXButtonUIConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) DUXButtonUIConfigModel *normal;
@property (retain, nonatomic) DUXButtonUIConfigModel *middle;
@property (retain, nonatomic) DUXButtonUIConfigModel *large;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)JSONKeyPathsByPropertyKey;

- (void)updateWithConfigIfNeed;
- (void)setupWithDefault;
- (void)setupWithDefaultOld;
- (id)configWithEnlargeType:(unsigned long long)a0 sizeStyle:(unsigned long long)a1;
- (double)maxHeightOfSizeStyle:(unsigned long long)a0;
- (id)configWithEnlargeTypeDefaultLarge:(unsigned long long)a0 sizeStyle:(unsigned long long)a1;
- (id)configWithEnlargeMode:(unsigned long long)a0 sizeStyle:(unsigned long long)a1;
- (id)configWithEnlargeMode:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)init;
- (void)setup;
- (void)updateWithModel:(id)a0;

@end
