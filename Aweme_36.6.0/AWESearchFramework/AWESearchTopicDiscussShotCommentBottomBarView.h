@class DUXBaseLabel, DUXBaseImageView, UIView;

@interface AWESearchTopicDiscussShotCommentBottomBarView : UIView

@property (retain, nonatomic) DUXBaseImageView *shotIcon;
@property (retain, nonatomic) DUXBaseImageView *commentIcon;
@property (retain, nonatomic) DUXBaseLabel *shotText;
@property (retain, nonatomic) DUXBaseLabel *commentText;
@property (retain, nonatomic) UIView *shotBgView;
@property (retain, nonatomic) UIView *commentBgView;
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
