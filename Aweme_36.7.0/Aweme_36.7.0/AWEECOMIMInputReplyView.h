@class UILabel, UIImageView, UIView;

@interface AWEECOMIMInputReplyView : UIView

@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *cancelView;
@property (copy, nonatomic) id /* block */ onClickCancel;

+ (id)displayStrWithReplyModel:(id)a0;
+ (double)replyViewHeightWithReplyModel:(id)a0;

- (void)updateReplyViewWithReplyModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onTap;
- (void)setupUI;

@end
