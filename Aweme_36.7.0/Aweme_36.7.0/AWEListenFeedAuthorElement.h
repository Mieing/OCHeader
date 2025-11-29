@class UILabel, DUXTextTag;

@interface AWEListenFeedAuthorElement : AWEListenFeedInteractionBaseElement

@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) DUXTextTag *followTag;

- (void)didClickFollowButton;
- (void)handleFollowedNotification:(id)a0;
- (void)handleUnFollowedNotification:(id)a0;
- (void)didClickAuthorName;
- (void)updateWithModel:(id)a0 playModel:(id)a1 extendModelArray:(id)a2 mixVideoModel:(id)a3 currentModelIndex:(long long)a4 context:(id)a5;
- (void)updateWithModel:(id)a0 playModel:(id)a1 context:(id)a2;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)update;

@end
