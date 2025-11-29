@class UIImageView, UILabel, UIView, UIButton;
@protocol IESECCommentNewEmptyPageViewProtocol;

@interface IESECCommentNewEmptyPageView : UIView

@property (retain, nonatomic) UIView *whiteBackGroundView;
@property (retain, nonatomic) UIView *mainContentView;
@property (retain, nonatomic) UIImageView *emptyImageView;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UIView *subTitleView;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIButton *retryButton;
@property (nonatomic) long long pageType;
@property (weak, nonatomic) id<IESECCommentNewEmptyPageViewProtocol> delegate;

- (void)retryButtonClicked;
- (void)updateUIWithConfig:(id)a0;
- (void)meaninglessFooterContainerClick;
- (void)updateEmptyPageViewWithConfig:(id)a0;
- (void)updateMainContentViewFrame;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;

@end
