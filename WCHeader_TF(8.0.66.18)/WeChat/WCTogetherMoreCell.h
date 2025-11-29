@class MMUIActivityIndicatorView, UIImageView, WCTogetherMoreViewItem, UIView, MMUILabel;

@interface WCTogetherMoreCell : WCTogetherBaseCell

@property (retain, nonatomic) UIView *tipsContainerView;
@property (retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) MMUILabel *tipsLabel;
@property (retain, nonatomic) UIView *endLineContainerView;
@property (retain, nonatomic) UIView *leftLine;
@property (retain, nonatomic) UIImageView *endPointView;
@property (retain, nonatomic) UIView *rightLine;
@property (retain, nonatomic) WCTogetherMoreViewItem *viewItem;

+ (id)cellIdentifier;
+ (double)heightForViewItem:(id)a0 inTableView:(id)a1;

- (id)observingKeyPathsForViewModel;
- (void)updateValueForKeyPath:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)loadTipsContainerView;
- (void)loadEndContainerView;
- (void)layoutSubviews;
- (void)layoutTipsContainerView;
- (void)layoutEndContainerView;
- (void)updateActivityIndicatorViewLoadingState;
- (void).cxx_destruct;

@end
