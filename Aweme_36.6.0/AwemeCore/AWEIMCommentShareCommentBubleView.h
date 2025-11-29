@class BDImageView, UITapGestureRecognizer, UIImageView, NSString, UILabel, UIView, YYLabel;
@protocol IESIMCommentShareCommentBubbleViewModelProtocol;

@interface AWEIMCommentShareCommentBubleView : UIView <IESIMCommentShareCommentBubbleViewProtocol>

@property (retain, nonatomic) id<IESIMCommentShareCommentBubbleViewModelProtocol> viewModel;
@property (nonatomic) BOOL hasBackground;
@property (retain, nonatomic) UIView *bubleBgView;
@property (retain, nonatomic) UIView *labelContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) YYLabel *subTitleLabel;
@property (retain, nonatomic) BDImageView *commentImageView;
@property (retain, nonatomic) UIImageView *playIconImageView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (copy, nonatomic) id /* block */ didTapViewBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_updateUI;
- (void)p_updateLayout;
- (void)p_setupLayout;
- (void)p_setupViews;
- (void)updateWithModel:(id)a0 hasBackground:(BOOL)a1;
- (void)stopAnimationIfNeed;
- (void)p_updateBubbleColor;
- (void)startAnimationIfNeed;
- (void)p_updateView;
- (void)p_didTapView:(id)a0;
- (void)updateColorWithHasBackground:(BOOL)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)clearContent;

@end
