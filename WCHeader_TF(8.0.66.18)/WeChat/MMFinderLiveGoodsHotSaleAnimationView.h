@class NSString, PAGView, PAGFile, UILabel;

@interface MMFinderLiveGoodsHotSaleAnimationView : UIView <CAAnimationDelegate>

@property (copy, nonatomic) id /* block */ salesUpdatingCompletion;
@property (retain, nonatomic) PAGFile *backgroundPAG;
@property (retain, nonatomic) UILabel *hotSaleLabel;
@property (retain, nonatomic) UILabel *hotSaleCountLabel;
@property (retain, nonatomic) PAGView *hotSaleBackgroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)ratio;
- (void)hotSaleBackgroundViewAppear:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)hotSaleLabelAppear:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)hotSaleLabelFirstAnimation:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)updateHotSaleAnimation:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)countLabelDanceAnimation:(double)a0;
- (void)finishHotSaleAnimation:(id /* block */)a0;
- (double)hotSaleTextAnimationDuration;
- (double)hotSaleAnimationLastPartDuration;
- (double)hotSaleAnimationFirstPartDuration;
- (void).cxx_destruct;

@end
