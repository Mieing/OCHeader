@class NSString;

@interface AWEPublishResultHandler : NSObject <AWEPublishTaskMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEDSStudioAdapterClass;
+ (id)defaultHandler;

- (void)task:(id)a0 didBeginWithInfo:(id)a1;
- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)replaceMusicPublishProgressWithTask:(id)a0 taskStatus:(long long)a1;
- (void)task:(id)a0 cancelWithResult:(BOOL)a1;
- (id)aAWEDSStudioAdapter;
- (void)onTaskCancel:(id)a0;
- (void)cancelProductDetectPostWithTask:(id)a0;
- (void)lynxBridgeSendEventWithTask:(id)a0 status:(long long)a1;
- (void)sendEventWithTask:(id)a0 status:(long long)a1;
- (void)saveUseMusicWhenBeginPublishIfNeededWithTask:(id)a0;
- (void)showToastWithResultV2:(long long)a0 error:(id)a1 task:(id)a2;
- (void)recordDraftInvisibleWithTask:(id)a0;
- (void)recordPublishSourcePathIfNeed:(id)a0;
- (void)showTipAlertAfterPublishSucceedIfNeedWithTask:(id)a0;
- (void)showTipAlertAfterPublishSucceedWithTitle:(id)a0 actionText:(id)a1 linkURL:(id)a2;
- (id)init;
- (void)dealloc;
- (void)startListen;

@end
