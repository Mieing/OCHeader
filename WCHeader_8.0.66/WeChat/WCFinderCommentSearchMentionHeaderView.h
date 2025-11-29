@class UILabel, MMUIButton;
@protocol WCFinderCommentSearchMentionHeaderViewDelegate;

@interface WCFinderCommentSearchMentionHeaderView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *closeBtn;
@property (weak, nonatomic) id<WCFinderCommentSearchMentionHeaderViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didClickClose:(id)a0;
- (void).cxx_destruct;

@end
