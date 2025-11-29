@class UIButton, UILabel, UIImageView;
@protocol MMMusicLiveCommentUnreadMentionViewDelegate;

@interface MMMusicLiveCommentUnreadMentionView : UIView

@property (retain, nonatomic) UIButton *notifyButton;
@property (retain, nonatomic) UILabel *unreadLabel;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (weak, nonatomic) id<MMMusicLiveCommentUnreadMentionViewDelegate> delegate;
@property (nonatomic) long long unreadCount;

- (id)init;
- (void)layoutSubviews;
- (void)setupUnreadCount:(long long)a0;
- (void)onTapUnreadMention;
- (void).cxx_destruct;

@end
