@class NSString, MMUIActivityIndicatorView, MMFinderLiveNoticeMoreViewItem, MMUILabel;

@interface MMFinderLiveNoticeMoreCell : UITableViewCell <MMFinderLiveNoticeMoreViewItemDelegate>

@property (class, readonly, copy, nonatomic) NSString *defaultCellIdentifier;

@property (retain, nonatomic) MMUILabel *tipsLabel;
@property (retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) MMFinderLiveNoticeMoreViewItem *viewItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForViewItem:(id)a0 inTableView:(id)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)loadTipsLabel;
- (void)loadActivityIndicatorView;
- (void)updateAllValues;
- (void)layoutSubviews;
- (void)updateActivityIndicatorViewLoadingState;
- (void)moreViewItemDidUpdate:(id)a0;
- (void).cxx_destruct;

@end
