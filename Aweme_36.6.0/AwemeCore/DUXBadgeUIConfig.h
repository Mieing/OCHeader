@class NSString, DUXBadgeUIConfigModel;

@interface DUXBadgeUIConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) DUXBadgeUIConfigModel *normal;
@property (retain, nonatomic) DUXBadgeUIConfigModel *middle;
@property (retain, nonatomic) DUXBadgeUIConfigModel *large;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
