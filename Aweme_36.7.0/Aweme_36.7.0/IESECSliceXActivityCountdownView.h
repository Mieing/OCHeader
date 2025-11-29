@class NSString, NSNumber, IESECGoodsDetailTimeCountdownView;

@interface IESECSliceXActivityCountdownView : IESECSliceXViewElementView <IESECGoodsDetailViewUpdateMessage>

@property (retain, nonatomic) IESECGoodsDetailTimeCountdownView *countdownView;
@property (copy, nonatomic) NSString *currentDetailPageID;
@property (nonatomic) BOOL isSmallMode;
@property (retain, nonatomic) NSNumber *currentTime;
@property (nonatomic) long long prefixSize;
@property (nonatomic) long long timerSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)updateWithSliceXElement:(id)a0 error:(id *)a1;
- (void)goodsDetailActivityDidUpdateCountdown:(id)a0 goodsDetailUID:(id)a1;
- (void)updateCountdown:(long long)a0 expireTime:(long long)a1 prefix:(id)a2;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)dealloc;

@end
