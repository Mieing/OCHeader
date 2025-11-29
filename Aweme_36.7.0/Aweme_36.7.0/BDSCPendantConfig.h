@interface BDSCPendantConfig : NSObject

@property (nonatomic) BOOL showCastingLabel;
@property (nonatomic) double disconnectTimerInterval;
@property (nonatomic) BOOL supportsStatusChange;

+ (id)defaultConfig;

- (id)init;

@end
