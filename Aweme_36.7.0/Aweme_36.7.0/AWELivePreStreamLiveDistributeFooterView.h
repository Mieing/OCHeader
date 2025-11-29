@class IESLiveCountTimeLabel, IESLiveImageView, UILabel, AWELivePreStreamCommonFooterViewConfig;

@interface AWELivePreStreamLiveDistributeFooterView : UICollectionReusableView

@property (retain, nonatomic) IESLiveImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) IESLiveCountTimeLabel *countTimeLabel;
@property (nonatomic) long long countNum;
@property (retain, nonatomic) AWELivePreStreamCommonFooterViewConfig *config;

- (void)setTimeLabelWithCount:(long long)a0 timeFormatBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)showTimerCountDownLabel;
- (void)reShowTitleLabel;
- (void)stopCount;
- (void)showCountLabel;
- (void)p_initUI;
- (void)startCount;
- (void).cxx_destruct;
- (void)resetCount;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithConfig:(id)a0;

@end
