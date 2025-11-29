@class AWEUserRecommendButton;

@interface AWEUserRecommendBigCardFooterView : UIView <AWEUserRecommendBigCardFooterView>

@property (retain, nonatomic) AWEUserRecommendButton *followBtn;
@property (retain, nonatomic) AWEUserRecommendButton *nextBtn;
@property (copy, nonatomic) id /* block */ followBtnTappedBlock;
@property (copy, nonatomic) id /* block */ nextBtnTappedBlock;
@property (copy, nonatomic) id /* block */ unFollowBtnTappedBlock;

- (void)followBtnTapped:(id)a0;
- (id)p_buttonColorModel;
- (void)nextBtnTapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAlpha:(double)a0;

@end
