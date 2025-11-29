@class UILabel, UIImageView, UIScrollView, UIView, LSIMNoticeModel;

@interface LSIMNoticeView : UIView

@property (retain, nonatomic) LSIMNoticeModel *model;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIView *seperatorView;
@property (retain, nonatomic) UILabel *contentLabel;

- (void)initView;
- (id)formatTimeText;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
