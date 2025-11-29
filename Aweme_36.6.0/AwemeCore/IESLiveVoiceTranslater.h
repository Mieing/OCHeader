@class NSString, SAMICore, NSMutableArray;

@interface IESLiveVoiceTranslater : NSObject

@property (retain, nonatomic) SAMICore *handler;
@property (nonatomic) BOOL translatePending;
@property (copy, nonatomic) id /* block */ fullPartTextResultCallBack;
@property (copy, nonatomic) id /* block */ failureCallBack;
@property (copy, nonatomic) NSString *fullyTranslatePartText;
@property (copy, nonatomic) NSString *translatingPartText;
@property (retain, nonatomic) NSMutableArray *needCleanHandles;
@property (nonatomic) BOOL disconnected;

- (void)cleanTranslateResult;
- (void)resumeTranslate;
- (void)startTranslateWithPartTextResultCallBack:(id /* block */)a0 failureCallBack:(id /* block */)a1;
- (void)pauseTranslate;
- (void)stopTranslate;
- (void)translatePCMAudioData:(id)a0 withDataSize:(long long)a1;
- (void)_processTranslateResult:(id)a0;
- (void)setupSAMI;
- (void)startTranslateWithTextResultCallBack:(id /* block */)a0 failureCallBack:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
