@class UIStackView, UILabel, UIView, NSString, AWEIMConversationContext, UIImageView, AWEIMMessagePropertyItem, AWEIMUserViewModel;
@protocol AWEIMMessageCellTagViewInterface;

@interface AWEIMMessageInteractiveUserTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView *contentImageView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UIView *roleTageContainer;
@property (retain, nonatomic) AWEIMUserViewModel *userVM;
@property (retain, nonatomic) AWEIMMessagePropertyItem *propertyItem;
@property (retain, nonatomic) UIView<AWEIMMessageCellTagViewInterface> *roleTagView;
@property (retain, nonatomic) UIStackView *horizontalStackView;
@property (retain, nonatomic) UIStackView *verticalStackView;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UIImageView *emojiView;
@property (copy, nonatomic) NSString *conversationID;
@property (weak, nonatomic) AWEIMConversationContext *conversationContext;

+ (id)identifier;

- (void)p_setupLayout;
- (void)p_refreshUI;
- (void)configWithPropertyItem:(id)a0;
- (void)p_loadMessageIfNeed:(id)a0;
- (void)p_loadImageIfNeed:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)avatarViewTapped:(id)a0;
- (void)imageViewTapped:(id)a0;

@end
