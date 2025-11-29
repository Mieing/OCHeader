@class NSMutableArray, CMessageWrap;
@protocol WCRawMediaTaskOperationDelegate;

@interface WCRawMediaTaskOperation : WCSilentTask

@property (retain, nonatomic) NSMutableArray *taskMediaArray;
@property (nonatomic) BOOL backgroundTaskEnabled;
@property (weak, nonatomic) id<WCRawMediaTaskOperationDelegate> delegate;
@property (retain, nonatomic) CMessageWrap *runningMessageWrap;

- (id)initWithTaskArray:(id)a0;
- (void)startOperation;
- (void)runLoop;
- (BOOL)stop;
- (BOOL)runDemoWork:(id)a0 withMsgWrap:(id)a1;
- (BOOL)runTestWork:(id)a0 withMsgWrap:(id)a1;
- (BOOL)runWork:(id)a0 withMsgWrap:(id)a1;
- (void).cxx_destruct;

@end
