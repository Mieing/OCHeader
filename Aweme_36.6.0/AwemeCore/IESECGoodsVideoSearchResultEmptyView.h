@class UIImageView, UILabel, UIButton;
@protocol IESECGoodsVideoSearchResultEmptyViewProtocol;

@interface IESECGoodsVideoSearchResultEmptyView : UIView

@property (retain, nonatomic) UIImageView *emptyImageView;
@property (retain, nonatomic) UILabel *errorHintLabel;
@property (retain, nonatomic) UIButton *retryButton;
@property (retain, nonatomic) UIButton *transToMallButton;
@property (weak, nonatomic) id<IESECGoodsVideoSearchResultEmptyViewProtocol> delegate;

- (void)retryButtonClicked;
- (void)updateNetworkEmptyView;
- (void)updateNoResultEmptyView;
- (void)transToMallButtonClicked;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
