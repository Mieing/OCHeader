@class NSNumber;

@interface RTVVoipPollingSettings : JSONModel

@property (retain, nonatomic) NSNumber *videoGroupPollingBeforeAcceptIntervalValue;
@property (retain, nonatomic) NSNumber *audioGroupPollingBeforeAcceptIntervalValue;
@property (retain, nonatomic) NSNumber *video1v1PollingBeforeAcceptIntervalValue;
@property (retain, nonatomic) NSNumber *audio1v1PollingBeforeAcceptIntervalValue;
@property (retain, nonatomic) NSNumber *voipGroupRoomPollingIntervalValue;

+ (id)keyMapper;

- (long long)videoGroupPollingIntervalBeforeAccept;
- (long long)audioGroupPollingIntervalBeforeAccept;
- (long long)video1v1PollingIntervalBeforeAccept;
- (long long)audio1v1PollingIntervalBeforeAccept;
- (long long)pollingPullGroupRoomInfoInterval;
- (void).cxx_destruct;

@end
