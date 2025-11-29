@interface IESLiveOpenRechargeDialogMethodImpl : IESLiveOpenRechargeDialogMethod

@property (nonatomic) BOOL hasDealtHandlerBefore;
@property (nonatomic) BOOL hasChargedSuccess;

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)p_dealCompletionHandlerAfterCharge:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
