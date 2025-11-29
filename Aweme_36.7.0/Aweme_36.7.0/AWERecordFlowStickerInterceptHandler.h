@class NSString, AWEVideoPublishViewModel;
@protocol ACCRecordSwitchModeService, IESServiceProvider, ACCCameraService, ACCRecordPropService;

@interface AWERecordFlowStickerInterceptHandler : NSObject <AWERecordFlowInterceptService>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithServiceProvider:(id)a0 repository:(id)a1;
- (BOOL)inOpenCreativePath;
- (BOOL)canInterceptOperationWith:(id)a0;
- (void)interceptChangeOperation;
- (void).cxx_destruct;

@end
