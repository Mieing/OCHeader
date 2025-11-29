@class NSString;

@interface BDPRuntimeInteractGame : BDPRuntime

@property (copy, nonatomic) NSString *mpLoadEventKey;

- (id)initWithCoreCompleteBlk:(id /* block */)a0;
- (void)updateUniqueID:(id)a0;
- (void)setupGameContext;
- (void)eventMpJsLoadStart;
- (void)eventMpJsLoadResult:(id)a0;
- (void).cxx_destruct;

@end
