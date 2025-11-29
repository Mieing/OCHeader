@class NSString;

@interface IESLiveProfitCheckGiftTask : IESLiveProfitCheckBaskTask

@property (copy, nonatomic) NSString *giftId;
@property (nonatomic) BOOL isSeries;

- (void)reportGiftProfitCheck:(unsigned long long)a0 withUserId:(id)a1 roomId:(id)a2 data:(id)a3;
- (void).cxx_destruct;

@end
