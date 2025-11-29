@class NSNumber;

@interface IESLiveReplaySettingModel : IESLiveDynamicModel <NSCopying>

@property (retain, nonatomic) NSNumber *replayRecordSwitch;
@property (retain, nonatomic) NSNumber *realTimeReplaySwitch;
@property (retain, nonatomic) NSNumber *replayAutoPublishSwitch;
@property (retain, nonatomic) NSNumber *replayProductSwitch;
@property (retain, nonatomic) NSNumber *replaySyncProductSwitch;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
