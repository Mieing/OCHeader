@class NSString, AWEVideoPublishViewModel;
@protocol ACCRecordPropService, ACCRecordFlowService, ACCCameraService;

@interface AWEStickerAIImageToTextHandler : AWEStickerApplyBaseHandler <ACCRecordFlowServiceSubscriber>

@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecordFlowService> recordFlowService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)flowServiceDidRemoveLastSegment:(BOOL)a0;
- (void)flowServiceDidEnterNextPageWithMode:(id)a0;
- (void)handleJson:(id)a0 taskId:(long long)a1;
- (void)handleArg2:(long long)a0 arg3:(id)a1;
- (void)camera:(id)a0 didRecvMessage:(id)a1;
- (void)camera:(id)a0 willApplySticker:(id)a1;
- (void)handlerDidBecomeActive;
- (void).cxx_destruct;

@end
