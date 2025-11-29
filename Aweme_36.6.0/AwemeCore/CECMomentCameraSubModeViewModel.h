@class NSString, ACCRecordContainerMode;
@protocol CECRecordModeFactory;

@interface CECMomentCameraSubModeViewModel : AFDMomentCameraBaseViewModel <CECMomentCameraSubModeInterface>

@property (retain, nonatomic) id<CECRecordModeFactory> modeFactory;
@property (nonatomic) BOOL switchLengthViewHidden;
@property (retain, nonatomic) ACCRecordContainerMode *containerMode;
@property (nonatomic) BOOL toggleForForceUpdate;
@property (nonatomic) BOOL cancelStartCaptureWithSwitch;
@property (nonatomic) long long modeIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (id)currentRecordModel;
- (void)injectService;
- (BOOL)updateContainerModeWith:(id)a0 replace:(long long)a1;
- (void)close;
- (void).cxx_destruct;

@end
