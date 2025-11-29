@class NSMutableArray;
@protocol WCMiddleImageTaskDelegate;

@interface WCMiddleImageTaskOperation : WCSilentTask

@property (retain, nonatomic) NSMutableArray *taskArray;
@property (weak, nonatomic) id<WCMiddleImageTaskDelegate> delegate;

- (id)initWithTaskArray:(id)a0;
- (void)setDontPause;
- (void)startOperation;
- (void)runLoop;
- (void).cxx_destruct;

@end
