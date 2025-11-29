@class NSMutableArray, IESEGoodsFeedImmersiveStackView;

@interface IESECGoodsFeedImmersiveSellingPointsView : IESECGoodsFeedImmersiveBaseView

@property (retain, nonatomic) NSMutableArray *labels;
@property (retain, nonatomic) IESEGoodsFeedImmersiveStackView *stackView;

- (void)configUI;
- (void)clearSubviewsInStackView:(id)a0;
- (id)labelWithIndex:(long long)a0;
- (id)fontWithUIConfig:(id)a0;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)layoutSubviews;
- (void)updateWithViewModel:(id)a0;

@end
