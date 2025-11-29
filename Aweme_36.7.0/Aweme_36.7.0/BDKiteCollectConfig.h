@class NSDictionary;

@interface BDKiteCollectConfig : NSObject

@property (nonatomic) int version;
@property (copy, nonatomic) NSDictionary *fileds;

+ (id)arrayToConfigDictionary:(id)a0;
+ (id)configWithEncryptString:(id)a0;

- (id)commonFeaturePathByKey:(id)a0;
- (id)configC0Path;
- (id)configO0Path;
- (id)configO1Path;
- (id)configD0Path;
- (void).cxx_destruct;

@end
