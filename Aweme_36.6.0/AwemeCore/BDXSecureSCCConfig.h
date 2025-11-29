@class BDXSecureSCCJumpAppConfig, BDXSCCSecureCheckingConfig;
@protocol BDXSCCSecureDataSource, BDXSCCSecureDelegate;

@interface BDXSecureSCCConfig : MTLModel

@property (nonatomic) BOOL enableSCC;
@property (weak, nonatomic) id<BDXSCCSecureDataSource> dataSource;
@property (weak, nonatomic) id<BDXSCCSecureDelegate> delegate;
@property (retain, nonatomic) BDXSecureSCCJumpAppConfig *appJumpConfig;
@property (retain, nonatomic) BDXSCCSecureCheckingConfig *secureCheckingConfig;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
