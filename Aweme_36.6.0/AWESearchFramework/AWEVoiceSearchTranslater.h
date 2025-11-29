@class SAMICore;

@interface AWEVoiceSearchTranslater : NSObject

@property (retain, nonatomic) SAMICore *handler;
@property (nonatomic) BOOL translatePending;
@property (copy, nonatomic) id /* block */ textResultCallBack;
@property (copy, nonatomic) id /* block */ failureCallBack;
@property (copy, nonatomic) id /* block */ connectedCallBack;
@property (copy, nonatomic) id /* block */ finishedCallBack;

- (void)pauseTranslate;
- (void)translatePCMAudioData:(id)a0 withDataSize:(long long)a1;
- (void)setupHandlerWithAppKey:(id)a0 token:(id)a1 extra:(id)a2 config:(id)a3;
- (void)clearCallBack;
- (void)setTextResultCallBack:(id /* block */)a0 connectedCallBack:(id /* block */)a1 failureCallBack:(id /* block */)a2 finishCallBack:(id /* block */)a3;
- (void)_processTranslateResult:(id)a0 extra:(id)a1;
- (void)setupSAMIWithAppKey:(id)a0 token:(id)a1 extra:(id)a2 config:(id)a3;
- (void)setupHandlerWithAppKey:(id)a0 token:(id)a1 extra:(id)a2;
- (void).cxx_destruct;
- (void)destroyHandler;

@end
