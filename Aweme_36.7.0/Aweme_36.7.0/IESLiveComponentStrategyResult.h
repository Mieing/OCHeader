@interface IESLiveComponentStrategyResult : NSObject

@property (nonatomic) unsigned long long liveEnterType;
@property (nonatomic) unsigned long long liveRoomPage;
@property (nonatomic) unsigned long long liveRoomScene;
@property (nonatomic) unsigned long long liveRoomBusinessType;
@property (nonatomic) unsigned long long liveEnterDeviceType;
@property (nonatomic) unsigned long long guideEnterSceneType;
@property (nonatomic) unsigned long long preloadStrategy;
@property (nonatomic) long long resourceDegradationLevel;
@property (nonatomic) long long deviceType;

- (id)factorResultDictionary;
- (id)init;

@end
