@class NSString, MMUIActivityIndicatorView, MMLiveCastViewItem, UIView, MMUILabel;

@interface MMFinderLiveCastItemCell : UITableViewCell

@property (class, readonly, copy, nonatomic) NSString *defaultCellIdentifier;

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) UIView *topSeparatorLine;
@property (retain, nonatomic) UIView *bottomSeparatorLine;
@property (retain, nonatomic) MMLiveCastViewItem *viewItem;

+ (double)heightForViewItem:(id)a0 inTableView:(id)a1;

- (void)_observeViewModel:(id)a0;
- (void)_unobserveViewModel:(id)a0;
- (void)_observedValueDidChangeForKeyPath:(id)a0;
- (id)observingKeyPathsForViewModel;
- (void)updateValueForKeyPath:(id)a0;
- (void)updateAllValues;
- (void)_willUnsetOldViewModel:(id)a0;
- (void)_didSetNewViewModel:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)dealloc;
- (void)loadTitleLabel;
- (void)loadActivityIndicatorView;
- (void)updateActivityIndicatorViewLoadingState;
- (void)loadSeparatorLines;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
