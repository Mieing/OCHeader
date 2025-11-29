@interface BDPVideoSRDeviceCheckResult : NSObject

@property (nonatomic) BOOL enable;
@property (nonatomic) long long resultType;

- (id)initWithEnable:(BOOL)a0 resultType:(long long)a1;

@end
