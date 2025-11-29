@class UILabel, UIImageView, UIView;

@interface IESLiveScreencastLinkerSearchSuggestCell : UITableViewCell

@property (retain, nonatomic) UILabel *wordLabel;
@property (retain, nonatomic) UIImageView *tipIcon;
@property (retain, nonatomic) UIView *separatorLine;

- (void)updateWithWord:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutUI;

@end
