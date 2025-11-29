@class UIImageView, UILabel;
@protocol AWENoticeFollowPushViewDelegate;

@interface AWENoticeFollowPushView : UIView

@property (weak, nonatomic) id<AWENoticeFollowPushViewDelegate> delegate;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *extTagLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *ensureLabel;

- (void)p_setUpUI;
- (void)p_folowUser;
- (void)updateExtTagLabel;
- (void)updateAfterFollowSuccess:(id)a0;
- (void)configure;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
