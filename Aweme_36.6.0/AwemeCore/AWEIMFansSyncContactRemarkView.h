@class UIImageView, UILabel, UIView, UIButton;
@protocol AWEIMFansSyncContactRemarkViewModelProtocol;

@interface AWEIMFansSyncContactRemarkView : UITableViewHeaderFooterView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *leftIcon;
@property (retain, nonatomic) UIView *contentContainer;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UILabel *subTitle;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) id<AWEIMFansSyncContactRemarkViewModelProtocol> viewModel;
@property (nonatomic) BOOL shouldUseOptimizedBgprimary;

+ (id)identifier;
+ (double)viewHeight;

- (void)clickActionButton;
- (void)configWithRemarkSyncReason:(id)a0;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (id)initWithReuseIdentifier:(id)a0;
- (void)setAlpha:(double)a0;
- (void)setupViews;

@end
