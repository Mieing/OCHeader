@class UILabel, UIView, WCFinderHeadImageView;

@interface WCFinderRefuseLikeListTableViewCell : MMMultiMenuTableViewCell

@property (retain, nonatomic) UILabel *nickName;
@property (retain, nonatomic) WCFinderHeadImageView *headImageView;
@property (retain, nonatomic) UIView *separator;
@property (nonatomic) BOOL separatorAlignAvatarLeft;

+ (id)cellId;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)updateWithNameHeadInfo:(id)a0;
- (void)showSeparator:(BOOL)a0;
- (void).cxx_destruct;

@end
