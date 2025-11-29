@class NSDictionary, NSString;

@interface TMBPEALimit : NSObject <TMBPEALimitServiceProtocol>

@property (copy, nonatomic) NSDictionary *presetCertLimits;
@property (copy, nonatomic) NSDictionary *presetAuthmap;
@property (copy, nonatomic) NSDictionary *dynamicList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithConfig:(id)a0;
- (void)updateConfig:(id)a0;
- (void)setupPresetAuthMap:(id)a0;
- (void)setupPresetLimitConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
