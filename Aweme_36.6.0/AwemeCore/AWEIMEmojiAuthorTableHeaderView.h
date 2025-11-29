@class AWEIMEmojiAuthor, UIImageView, UILabel, UIView, UIButton;
@protocol AWEIMEmojiAuthorTableHeaderViewDelegate;

@interface AWEIMEmojiAuthorTableHeaderView : UITableViewHeaderFooterView

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *gotoHomePageButton;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) AWEIMEmojiAuthor *author;
@property (weak, nonatomic) id<AWEIMEmojiAuthorTableHeaderViewDelegate> delegate;

- (void)__setupUIs;
- (void)__didClickGoToHomePage;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;

@end
