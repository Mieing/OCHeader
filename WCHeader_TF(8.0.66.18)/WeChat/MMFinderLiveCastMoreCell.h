@class MMLiveCastMoreViewItem, NSString, MMUIActivityIndicatorView, UIView, RichTextView;

@interface MMFinderLiveCastMoreCell : UITableViewCell

@property (class, readonly, copy, nonatomic) NSString *defaultCellIdentifier;

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) RichTextView *titleTextView;
@property (retain, nonatomic) MMLiveCastMoreViewItem *viewItem;

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
- (void)loadContainerView;
- (void)loadActivityIndicatorView;
- (void)loadTitleTextView;
- (void)updateActivityIndicatorViewLoadingState;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
