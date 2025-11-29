@class UIImageView, WCFinderAuthorContactView;

@interface WCFinderSDKBindContactCell : UITableViewCell

@property (retain, nonatomic) WCFinderAuthorContactView *contactView;
@property (retain, nonatomic) UIImageView *iconImageView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)setUpUI;
- (void)updateWithContact:(id)a0;
- (void).cxx_destruct;

@end
