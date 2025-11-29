@class BDPSchema, BDPUniqueID, BDPTimorLaunchParam;

@interface BDPAheadBooter : NSObject

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPTimorLaunchParam *launchParam;
@property (retain, nonatomic) BDPSchema *schema;

- (void)prepareEnvironment;
- (void)aheadBoot;
- (void)prepareLocationWithCommon:(id)a0;
- (id)initWithUniqueID:(id)a0 schema:(id)a1 launchParam:(id)a2;
- (void).cxx_destruct;

@end
