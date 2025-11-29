@class NSArray;

@interface WCFinderPlayRateButton : MMUIButton

@property (retain, nonatomic) NSArray *playRatePairs;
@property (copy, nonatomic) id /* block */ playRateChangeBlock;
@property (nonatomic) long long currentIndex;
@property (nonatomic) long long normalPlayRateIndex;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)resetToNormalPlayRate;
- (void)setPlayRate:(double)a0;
- (double)currentPlayRate;
- (void)onClickBtn;
- (void)updatePlayRateState;
- (BOOL)isNormalPlayRate:(double)a0;
- (BOOL)isPlayRate:(double)a0 equalToOtherPlayRate:(double)a1;
- (void).cxx_destruct;

@end
