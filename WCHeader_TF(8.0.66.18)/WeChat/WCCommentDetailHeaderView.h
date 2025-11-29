@class UILabel, MMUIButton, UIStackView;
@protocol WCCommentDetailHeaderViewDelegate;

@interface WCCommentDetailHeaderView : UIView

@property (retain, nonatomic) UIStackView *titleViewContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) MMUIButton *closeBtn;
@property (weak, nonatomic) id<WCCommentDetailHeaderViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)adjustLayout;
- (void)layoutSubviews;
- (void)didClickClose:(id)a0;
- (void).cxx_destruct;

@end
