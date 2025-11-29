@interface MMLiveAudioRoomModeTimeRecorder : NSObject

@property (nonatomic) unsigned long long currentAudioRoomScene;
@property (nonatomic) unsigned long long startRecordingTime;
@property (nonatomic) unsigned long long radioSceneTime;
@property (nonatomic) unsigned long long multiPlayerRoomSceneTime;
@property (nonatomic) unsigned long long ktvSceneTime;

- (void)updateTimeValueWithCurrentTime:(unsigned long long)a0;
- (void)notifyAudioRoomSceneChangedTo:(unsigned long long)a0;
- (void)checkAndUpdateTimeValues;

@end
