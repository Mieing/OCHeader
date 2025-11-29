@class BDCertLimitBinder;

@interface BDLimitStrategySetting : NSObject

@property (retain, nonatomic) BDCertLimitBinder *limitBinder;

+ (id)sharedInstance;

- (void)initCertLimits:(id)a0;
- (void)initAuthMap:(id)a0;
- (void)initDynamicLimits:(id)a0;
- (void)updateCertLimits:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
