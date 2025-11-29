@class AWENearbyHotSpotProgressContentView;

@interface AWENearbyHotSpotProgressDotView : UIView

@property (nonatomic) long long targetIndex;
@property (nonatomic) long long index;
@property (weak, nonatomic) AWENearbyHotSpotProgressContentView *progressView;

- (void)updateDotViewState;
- (id)currentStateArray;
- (id)initWithIndex:(long long)a0 progressView:(id)a1;
- (void)changeStateWithAnimation:(BOOL)a0 isScrollUp:(BOOL)a1 isChangeState:(BOOL)a2;
- (void).cxx_destruct;

@end
