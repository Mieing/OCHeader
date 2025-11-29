@class AWEFeedSubtitleSwitchLanguageCellModel, UILabel, DUXRadioBox, UIView;

@interface AWEFeedSubtitleSwitchLanguageCell : UITableViewCell

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIView *contentContainer;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *subContentLabel;
@property (retain, nonatomic) DUXRadioBox *radioBox;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) AWEFeedSubtitleSwitchLanguageCellModel *model;

+ (double)cellHeight;

- (void)updateWithCellModel:(id)a0;
- (void)updateCornerState:(unsigned long long)a0;
- (void)updateSelectedStatus:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
