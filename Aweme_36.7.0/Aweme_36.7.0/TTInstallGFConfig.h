@class NSDictionary;

@interface TTInstallGFConfig : NSObject

@property (nonatomic) int version;
@property (nonatomic) int delaySeconds;
@property (nonatomic) long long refreshDtraitTime;
@property (copy, nonatomic) NSDictionary *fileds;
@property (copy, nonatomic) NSDictionary *dtraitFields;

+ (id)arrayToConfigDictionary:(id)a0;
+ (id)configWithEncryptString:(id)a0;

- (id)commonFeaturePathByKey:(id)a0;
- (id)configDC0Path;
- (id)configDO0Path;
- (id)configDO1Path;
- (id)dtraitConfigPathWithName:(id)a0;
- (int)dtraitConfigIndexWithName:(id)a0;
- (void).cxx_destruct;

@end
