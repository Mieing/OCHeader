@class NSString;

@interface IESLiveRoomStrategyCenter : NSObject <IESLiveRoomStrategyCenterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (unsigned long long)preStreamOrientation:(id)a0;
- (id)getStrategyWithRequest:(id)a0;
- (void)p_collectRoomInfo:(id)a0;
- (id)simpleStrategyMap;
- (id)complexStrategyMap;

@end
