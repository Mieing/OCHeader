@class NSString;

@interface IESLiveProfitCheckFrontEndTask : IESLiveProfitCheckBaskTask

@property (nonatomic) long long originType;
@property (copy, nonatomic) NSString *originEventName;

- (void)reportFrontEndProfitCheck:(unsigned long long)a0 withUserId:(id)a1 roomId:(id)a2 data:(id)a3;
- (id)initWithCheckData:(id)a0;
- (void).cxx_destruct;
- (id)eventName;

@end
