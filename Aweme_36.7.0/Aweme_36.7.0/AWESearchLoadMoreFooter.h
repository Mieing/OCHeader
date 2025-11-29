@class NSAttributedString, UILabel, DUXLoadingParticleView, YYLabel;

@interface AWESearchLoadMoreFooter : AWELoadMoreFooter {
    BOOL _showNoMoreDataText;
}

@property (retain, nonatomic) UILabel *originLabel;
@property (nonatomic) BOOL originLabelIsHidden;
@property (retain, nonatomic) YYLabel *labelY;
@property (retain, nonatomic) DUXLoadingParticleView *customLoadingView;
@property (nonatomic) long long mj_insetBResetedOffset;
@property (nonatomic) BOOL showLoadingInIdleAndPullingState;
@property (copy, nonatomic) NSAttributedString *noMoreDataAttributedStringWithLink;

- (void)setShowNoMoreDataText:(BOOL)a0;
- (void)placeSubviews;
- (BOOL)showNoMoreDataText;
- (void)updateLoadingState;
- (void)getOriginalLabel;
- (id)getCurrentLable;
- (void)shouldHideLable:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepare;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setState:(long long)a0;

@end
