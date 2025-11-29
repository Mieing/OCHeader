@class DUXInfoPanelUIConfigModel;

@interface DUXInfoPanelUIConfig : NSObject

@property (retain, nonatomic) DUXInfoPanelUIConfigModel *normal;
@property (retain, nonatomic) DUXInfoPanelUIConfigModel *middle;
@property (retain, nonatomic) DUXInfoPanelUIConfigModel *large;

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
