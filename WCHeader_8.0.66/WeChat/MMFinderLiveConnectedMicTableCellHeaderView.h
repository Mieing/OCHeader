@class MMFinderLiveConnectedMicBaseCellHeaderView, NSString, MMFinderLiveConnectedMicCellHeaderViewAction, UILabel;

@interface MMFinderLiveConnectedMicTableCellHeaderView : UITableViewCell

@property (retain, nonatomic) MMFinderLiveConnectedMicBaseCellHeaderView *baseView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) MMFinderLiveConnectedMicCellHeaderViewAction *action;
@property (nonatomic) BOOL showSeparatorBar;

+ (id)ReuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)updateWithTitle:(id)a0;
- (void).cxx_destruct;

@end
