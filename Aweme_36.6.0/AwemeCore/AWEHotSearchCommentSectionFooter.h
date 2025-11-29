@class UIStackView, AWEHotSearchCommentSectionFooterModel, UIImageView, UIView, UILabel;

@interface AWEHotSearchCommentSectionFooter : UICollectionReusableView

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIView *topPaddingView;
@property (retain, nonatomic) UIView *expandReplyView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *expandReplayLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *expandReplyPaddingView;
@property (retain, nonatomic) UIView *sourceView;
@property (retain, nonatomic) UILabel *sourceLabel;
@property (retain, nonatomic) UILabel *sourceContentLabel;
@property (retain, nonatomic) UIView *sourcePaddingView;
@property (copy, nonatomic) id /* block */ expandReplyClickedBlock;
@property (copy, nonatomic) id /* block */ sourceClickedBlock;
@property (retain, nonatomic) AWEHotSearchCommentSectionFooterModel *footerModel;

- (void)p_setupView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
