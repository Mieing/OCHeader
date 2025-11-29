@class NSString, NSArray;
@protocol ACCRecordSwitchModeService, ACCCameraService;

@interface ACCPOIUGCRecordSwitchModeViewModel : ACCRecorderViewModel <ACCSwitchModeViewDelegate, ACCSwitchModeViewDataSource>

@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *tabConfigArray;

- (void)didSelectItemAtIndex:(long long)a0 method:(long long)a1;
- (void)willDisplayItemAtIndex:(long long)a0;
- (BOOL)forbidScrollChangeMode;
- (long long)indexOfModeId:(long long)a0;
- (void).cxx_destruct;

@end
