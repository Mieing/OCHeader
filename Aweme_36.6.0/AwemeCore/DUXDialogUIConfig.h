@class DUXDialogUIConfigModel, NSString;

@interface DUXDialogUIConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) DUXDialogUIConfigModel *normal;
@property (retain, nonatomic) DUXDialogUIConfigModel *middle;
@property (retain, nonatomic) DUXDialogUIConfigModel *large;
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
