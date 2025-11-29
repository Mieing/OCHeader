@class NSString;

@interface IESECLiveTargetFlashDialogWidget : IESECLiveBaseWidget <IESECLiveMessageSubscriber>

@property (copy, nonatomic) NSString *targetFlashSchemaToJumpAfterCartShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)liveContext;
- (void)widgetMount;
- (void)widgetUnmount;
- (void)didShowShopCart:(BOOL)a0;
- (BOOL)whetherCanShow;
- (void)popLiveTargetFlashDialogBySchema:(id)a0;
- (void)sendTargetFlashCloseOtherDialogsEvent:(id)a0;
- (id)createCurrentWidgetBTMModel;
- (void)messageReceived_IESECLiveTargetFlashMessage:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
