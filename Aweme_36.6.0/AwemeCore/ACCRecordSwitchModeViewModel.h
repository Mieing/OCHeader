@class NSString, NSArray;
@protocol ACCRecordDurationService, ACCRecordSwitchModeService, ACCCameraService, ACCRecordModeFactory, ACCRecordSelectMusicService;

@interface ACCRecordSwitchModeViewModel : ACCRecorderViewModel <ACCSwitchModeViewDelegate, ACCSwitchModeViewDataSource>

@property (retain, nonatomic) id<ACCRecordModeFactory> modeFactory;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordDurationService> durationService;
@property (retain, nonatomic) id<ACCRecordSelectMusicService> selectMusicService;
@property (nonatomic) BOOL textTrack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *tabConfigArray;

- (id)configService;
- (void)didSelectItemAtIndex:(long long)a0 method:(long long)a1;
- (void)willDisplayItemAtIndex:(long long)a0;
- (BOOL)forbidScrollChangeMode;
- (BOOL)switchModeViewForbidHitTest;
- (long long)indexOfModeId:(long long)a0;
- (void)changeCurrentLengthMode:(id)a0;
- (id)videoConfig;
- (void).cxx_destruct;
- (void)dealloc;

@end
