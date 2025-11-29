@class NSMutableArray;

@interface IESLatchLifeCircleCenter : NSObject

@property (retain, nonatomic) NSMutableArray *delegates;

+ (id)sharedCenter;

- (void)latchWillStartAttachWithContainer:(id)a0;
- (void)latchPrepareFinishWithContainer:(id)a0;
- (void)latchWillStartIOWithContainer:(id)a0;
- (void)latchDidFinishIOWithContainer:(id)a0;
- (void)latchWillStartEvaluateInitJSWithContainer:(id)a0;
- (void)latchDidFinishEvaluateInitJSWithContainer:(id)a0;
- (void)latchWillStartEvaluatePrefetchJSWithContainer:(id)a0;
- (void)latchDidFinishEvaluatePrefetchJSWithContainer:(id)a0;
- (void)latchContainer:(id)a0 willStartCallJSB:(id)a1 withCallBackID:(id)a2;
- (void)latchContainer:(id)a0 didFinishCallJSB:(id)a1 withCallBackID:(id)a2;
- (void)latchContainer:(id)a0 willStartTransferJSBWithCallBackID:(id)a1;
- (void)latchContainer:(id)a0 didFinishTransferJSBWithCallBackID:(id)a1;
- (void)latchContainer:(id)a0 processorFinishWithStatus:(id)a1 cached:(id)a2 transferType:(id)a3 errMsg:(id)a4 timeout:(id)a5 engineType:(id)a6 perfInfo:(id)a7;
- (void)latchContainer:(id)a0 didReceivedLog:(id)a1 error:(id)a2 tag:(long long)a3 extra:(id)a4;
- (void)registerLifeCircleDelegtae:(id)a0;
- (void)unregisterLifeCircleDelegtae:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
