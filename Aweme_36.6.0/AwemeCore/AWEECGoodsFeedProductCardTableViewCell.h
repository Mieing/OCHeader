@class AWEGoodsFeedDetailTableViewController, UIViewController, UIView;
@protocol AWEECGoodsFeedProductCardViewProtocol;

@interface AWEECGoodsFeedProductCardTableViewCell : UITableViewCell

@property (retain, nonatomic) UIView<AWEECGoodsFeedProductCardViewProtocol> *productCardView;
@property (nonatomic) BOOL isFirstCardFullScreen;
@property (weak, nonatomic) AWEGoodsFeedDetailTableViewController *parentVC;
@property (nonatomic) long long indexPath;
@property (nonatomic) long long maxUserScrollIndex;
@property (retain, nonatomic) UIViewController *viewController;

+ (id)reuseIdentifier;

- (void)configUI;
- (void)updateFirstCardPanPercent:(double)a0;
- (void)addFakeNextCardIfNeeded:(id)a0;
- (void)updateLayoutWithIsFullMode:(BOOL)a0 animationTime:(double)a1;
- (void)updateLayoutWithPreviewPercent:(double)a0;
- (void)productCardWillDisplay;
- (void)configWithModel:(id)a0 modelInitTime:(double)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
