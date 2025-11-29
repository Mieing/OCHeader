@class UIImageView, UILabel, NSString;

@interface AFDMentionFeedBottomBarView : UIView <AFDMentionFeedBottomBarViewProtocol>

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *mentionLabel;
@property (retain, nonatomic) UILabel *replyLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_updateAvatarWithImageURLs:(id)a0;
- (void)updateWithImageURLs:(id)a0 attributedText:(id)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
