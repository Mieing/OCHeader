@class AWEHotSearchCommentActionButton, UILabel, UIView, YYLabel;

@interface AWEHotSearchCommentActionBarView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) YYLabel *timeLabel;
@property (retain, nonatomic) UILabel *replyLabel;
@property (retain, nonatomic) AWEHotSearchCommentActionButton *likeButton;
@property (copy, nonatomic) id /* block */ likeBtnClickedBlock;
@property (copy, nonatomic) id /* block */ commentBtnClickedBlock;

- (void)configWithModel:(id)a0;
- (void)updateReplyLabelHidden:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
