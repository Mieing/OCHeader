@class NSArray, NSString, AWEVideoPublishViewModel;
@protocol ACCCameraService, ACCEditServiceProtocol, IESServiceProvider;

@interface AWEGenericEffectMessageManager : NSObject <AWEEffectMessageInterceptor, AWEGenericEffectMessageSender>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSArray *messageHandlers;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)consumeMessage:(id)a0 isGlobal:(id)a1;
- (id)initWithScene:(unsigned long long)a0 serviceContainer:(id)a1;
- (void)sendEffectMessage:(id)a0 messageId:(long long)a1 taskId:(long long)a2 isGlobal:(id)a3;
- (void)p_composeHandlers;
- (BOOL)p_isAvaiablePath;
- (void)saveAIMetaDateIfNeededWithMessage:(id)a0;
- (id)p_messageHandlersForRecord;
- (id)p_messageHandlersForEdit;
- (void).cxx_destruct;

@end
