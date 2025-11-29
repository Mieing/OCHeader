@class NSString, DUXBasicSheet, ACCAIGCPointsTaskViewController;
@protocol IESLCMessageHandlerProtocol;

@interface ACCAIGCPointsTaskHelper : NSObject <IESLCMessageHandlerService, DUXSheetDelegate, AWEAIGCAIAssetTaskProtocol>

@property (copy, nonatomic) id /* block */ taskCompletedBlock;
@property (copy, nonatomic) id /* block */ taskPanelDismiss;
@property (retain, nonatomic) ACCAIGCPointsTaskViewController *taskViewController;
@property (retain, nonatomic) DUXBasicSheet *sheet;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isTaskPanelShowing;

- (void)sheetDidDismiss:(id)a0;
- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (void)stopLongConnectionAndQueryTask;
- (void)startLongConnectionAndQueryTask;
- (void)inviteAICreationTaskWithTaskItem:(id)a0 extraDict:(id)a1;
- (void)taskViewControllerDidSelectItem:(id)a0 extraDict:(id)a1;
- (void)showTaskViewControllerWithTasks:(id)a0 effectModel:(id)a1 didSelectItemBlock:(id /* block */)a2 extraDict:(id)a3;
- (void)observerAIAssetTaskCompletion:(id /* block */)a0;
- (void)observerAIAssetTaskPanelDismiss:(id /* block */)a0;
- (void)showTaskViewControllerWithTaskItems:(id)a0 didSelectItemBlock:(id /* block */)a1 extraDict:(id)a2;
- (void)getStickerModelWithID:(id)a0 completion:(id /* block */)a1;
- (void)shareStickerTaskWithTaskItem:(id)a0 extraDict:(id)a1;
- (void)addSLCMessageSubscriber;
- (void)removeSLCMessageSubscriber;
- (void)showTaskViewControllerWithTasks:(id)a0 ckTemplateModel:(id)a1 didSelectItemBlock:(id /* block */)a2 extraDict:(id)a3;
- (void).cxx_destruct;

@end
