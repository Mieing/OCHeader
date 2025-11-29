@class NSString, AWEVideoPublishViewModel;
@protocol ACCCameraService, AWEStudioBusinessCameraFlowControlProtocol, IESServiceProvider, ACCRecordTrackService, ACCRecordPropService;

@interface AWERecordFlowLogger : NSObject <AWEStudioBusinessCameraBasicActionProtocol, AWERecordFlowInterceptService>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<AWEStudioBusinessCameraFlowControlProtocol> cameraFlowService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordTrackService> trackService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
