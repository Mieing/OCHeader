@class IESECLiveTracker, IESECLiveRoomParams;

@interface IESECLiveRoomParamVerify : NSObject

@property (retain, nonatomic) IESECLiveRoomParams *coreParams;
@property (retain, nonatomic) IESECLiveTracker *tracker;

+ (void)clearLog;
+ (void)logOriginEnterRoomParams:(id)a0;
+ (void)logBeforeBuildEcomLiveParams:(id)a0;
+ (void)logAfterBuildEcomLiveParams:(id)a0;

- (id)initWithLiveContext:(id)a0;
- (void)p_verifySchemaFactoryUsage;
- (void)p_verifyEnterRoomParams;
- (void)p_monitorEnterRoomParams;
- (void)verifyLiveParams;
- (void).cxx_destruct;

@end
