@class NSString, UIImageView, UILabel, UIButton;

@interface AWEASMusicHistorySuggestionTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *displayLabel;
@property (retain, nonatomic) UIButton *deleteButton;
@property (copy, nonatomic) id /* block */ deleteBtnClickCallback;
@property (copy, nonatomic) NSString *query;

+ (id)identifier;

- (void)configWithQuery:(id)a0 iconImageName:(id)a1 deleteButtonImageName:(id)a2;
- (void)handleDeleteButtonClick:(id)a0;
- (void)configFindMoreMusicCell;
- (void)configMusicSearchHistoryCellWithMusicTitle:(id)a0;
- (void)switchDarkMode;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;

@end
