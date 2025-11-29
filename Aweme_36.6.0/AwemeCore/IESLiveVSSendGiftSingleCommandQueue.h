@class NSError;

@interface IESLiveVSSendGiftSingleCommandQueue : IESLiveVSSendGiftCommandQueue

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSError *error;

- (void)runCommand:(id)a0 completion:(id /* block */)a1;
- (void)handleFinishCommand:(id)a0 error:(id)a1 shouldEnd:(BOOL *)a2;
- (void).cxx_destruct;
- (void)willEnd;

@end
