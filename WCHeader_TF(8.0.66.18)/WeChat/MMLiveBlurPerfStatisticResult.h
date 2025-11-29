@interface MMLiveBlurPerfStatisticResult : MMLiveUIPerfStatisticResult

@property (nonatomic) double sumComposeArea;
@property (nonatomic) double sumComposeAreaPercent;

- (void)addBlurPerfRecord:(id)a0;

@end
