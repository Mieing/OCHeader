@class UILabel, IESLiveWebpLoadingView;

@interface IESLiveSyncMultiDeviceLoadingCell : UITableViewCell

@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (nonatomic) unsigned long long theme;
@property (retain, nonatomic) UILabel *strLabel;

+ (double)cellHeight;

- (void)updateTheme:(unsigned long long)a0;
- (void)updateSearchAnimStatus:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)startLoading;
- (void)stopLoading;
- (void)dealloc;
- (void)setupViews;
- (void)updateUI;

@end
