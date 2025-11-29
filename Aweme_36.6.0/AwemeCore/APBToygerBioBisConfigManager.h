@class NSString, APBToygerRemoteConfig, APBToygerSoluCfg;

@interface APBToygerBioBisConfigManager : NSObject

@property (nonatomic) int sampleMode;
@property (retain, nonatomic) NSString *bisToken;
@property (retain, nonatomic) NSString *iosvoicecfg;
@property (retain, nonatomic) APBToygerRemoteConfig *bisConfig;
@property (retain, nonatomic) APBToygerSoluCfg *solucfg;
@property (retain, nonatomic) NSString *apBioSecPublicKey;
@property (copy, nonatomic) NSString *protocol;

+ (id)getDictfrom:(id)a0;

- (id)initWithBisConfig:(id)a0;
- (void)fillSoluCfgWithContent:(id)a0;
- (void)setTestPubKey;
- (void).cxx_destruct;

@end
