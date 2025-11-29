@class AWEIMPushViewModel, UIImageView, UILabel, UIView, UIButton;
@protocol AWEIMPushViewDelegate;

@interface AWEIMPushView : UIView

@property (weak, nonatomic) id<AWEIMPushViewDelegate> delegate;
@property (retain, nonatomic) UIView *contentBaseView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *noticeTypeImageView;
@property (retain, nonatomic) UIView *onlineView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UIView *imStreakView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIButton *replyButton;
@property (retain, nonatomic) AWEIMPushViewModel *model;

- (BOOL)hitStreakUpdateExp;
- (void)__addSubviews;
- (void)updateConsecutiveChatStatusWithPushModel:(id)a0;
- (void)updateSimplifiedReplyButton;
- (void)__setAvatarImageViewWithDefaultImage:(id)a0;
- (void)updateNonaggregatedReplyButtonWithChat:(id)a0;
- (void)updateReplyButtonWithIsAggregation:(BOOL)a0 chat:(id)a1;
- (void)__replyButtonClick:(id)a0;
- (void)updateSimplifiedPushView;
- (void)updatePushViewWithChat:(id)a0;
- (void)updateContent:(id)a0 chat:(id)a1 isAggregation:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
