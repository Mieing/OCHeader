@class AWENoticeInnerPushMultiAvatarView, UIImageView, AWEButton, UILabel, UIView;
@protocol AWENoticeCommonPushViewDelegate;

@interface AWENoticeCommonPushView : UIView

@property (weak, nonatomic) id<AWENoticeCommonPushViewDelegate> delegate;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UIView *imStreakView;
@property (retain, nonatomic) UILabel *extTagLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) AWENoticeInnerPushMultiAvatarView *multiAvatarView;
@property (retain, nonatomic) UIImageView *noticeTypeImageView;
@property (retain, nonatomic) UIView *onlineView;
@property (retain, nonatomic) AWEButton *replyButton;
@property (retain, nonatomic) UIView *contentBaseView;
@property (retain, nonatomic) UIImageView *avatarImageView;

- (BOOL)hitStreakUpdateExp;
- (void)__addSubviews;
- (void)__replyButtonClick:(id)a0;
- (void)updatePushView;
- (void)p_updateConsecutiveChatStatus;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
