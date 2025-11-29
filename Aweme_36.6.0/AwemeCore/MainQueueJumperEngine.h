@class NSMutableArray;

@interface MainQueueJumperEngine : NSObject

@property (retain) NSMutableArray *mainQueueJumperActions;
@property BOOL mainQueueJumperEnabled;

+ (id)shareInstance;

- (void)parseTNCMainQueueJumperConfig:(id)a0;
- (id)parseMainQueueJumperConfig:(id)a0;
- (BOOL)canRequestJumpOnMainQueue:(id)a0;
- (void)setLocalMainqueueJumperConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
