@class UIButton, DUXBaseImageView, UIView, DUXBaseLabel;

@interface AWEUGCTopicDiscussShotCommentBottomBarView : UIView

@property (retain, nonatomic) DUXBaseImageView *commentIcon;
@property (retain, nonatomic) UIView *commentBgView;
@property (retain, nonatomic) DUXBaseLabel *commentText;
@property (retain, nonatomic) UIButton *shotButton;
@property (copy, nonatomic) id /* block */ commentClickedBlock;
@property (copy, nonatomic) id /* block */ shotClickedBlock;

- (void)onShotClicked;
- (void)onDiscussClicked;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)updateWithModel:(id)a0;
- (void)setupLayout;

@end
