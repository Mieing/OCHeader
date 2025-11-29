@class BDXSecureSecLinkConfig, BDXSecureSCCConfig;

@interface BDXSecureConfig : MTLModel

@property (retain, nonatomic) BDXSecureSCCConfig *sccConfig;
@property (retain, nonatomic) BDXSecureSecLinkConfig *seclinkConfig;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
