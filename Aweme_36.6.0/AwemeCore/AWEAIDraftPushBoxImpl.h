@class NSString;

@interface AWEAIDraftPushBoxImpl : NSObject <AWEAIDraftPushBoxProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showAIDoingInnerNotificationWithCover:(id)a0;
- (void)showAIDoingInnerNotificationWithCover:(id)a0 isTemplate:(BOOL)a1;
- (void)showAIDoneInnerNotificationWithDraft:(id)a0 isTemplate:(BOOL)a1 title:(id)a2 cover:(id)a3 touchedHandler:(id /* block */)a4 completion:(id /* block */)a5;
- (void)showAIFailedInnerNotificationWithDraft:(id)a0 title:(id)a1 cover:(id)a2 touchedHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (void)showDialogWithDraftId:(id)a0 headingContent:(id)a1 cover:(id)a2 clickActionBlock:(id /* block */)a3 completion:(id /* block */)a4;

@end
