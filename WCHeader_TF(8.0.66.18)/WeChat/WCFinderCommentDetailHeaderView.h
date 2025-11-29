@class WCFinderCommentListSelectTabView, UILabel, WCFinderSteramProfileBarView, MMUIButton;
@protocol WCFinderCommentDetailHeaderViewDelegate;

@interface WCFinderCommentDetailHeaderView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *closeBtn;
@property (retain, nonatomic) WCFinderSteramProfileBarView *lineView;
@property (retain, nonatomic) WCFinderCommentListSelectTabView *selectTabView;
@property (weak, nonatomic) id<WCFinderCommentDetailHeaderViewDelegate> delegate;
@property (nonatomic) BOOL useMultipleTabStyle;

+ (double)headerViewHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 useMultipleTabStyle:(BOOL)a1;
- (void)setUpTraditionalHeader;
- (void)adjustTraditionalLayout;
- (void)adjustLayout;
- (void)adjustMultipleTabLayout;
- (void)layoutSubviews;
- (void)setUpMultipleTabHeader;
- (void)updateCommentStr:(id)a0 shopCommentStr:(id)a1 linkText:(id)a2 showArrow:(BOOL)a3;
- (void)updateMoveDistance:(double)a0;
- (void)didClickClose:(id)a0;
- (void).cxx_destruct;

@end
