@class NSString, UIImageView, LOTAnimationView, UILabel, AWEHotSpotInnerContext;

@interface AWEHotPointPanelTableViewCell : UITableViewCell <AWEHotPointPanelTableViewCellProtocol>

@property (retain, nonatomic) UILabel *indexLabel;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *tagImageView;
@property (retain, nonatomic) UIImageView *hotCountIconView;
@property (retain, nonatomic) UILabel *useCountLabel;
@property (retain, nonatomic) UILabel *relateCountLabel;
@property (retain, nonatomic) UIImageView *risingHotSpotImageView;
@property (retain, nonatomic) LOTAnimationView *hotLiveLottieView;
@property (retain, nonatomic) UILabel *relationLabel;
@property (retain, nonatomic) AWEHotSpotInnerContext *context;
@property (readonly, nonatomic) BOOL isOptimized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;
+ (double)cellHeight;

- (void)hideMaskView;
- (void)configureUI;
- (void)configureWithModel:(id)a0 indexPath:(id)a1 inChannel:(BOOL)a2;
- (void)configureWithModel:(id)a0 indexPath:(id)a1 inChannel:(BOOL)a2 needNewDesc:(BOOL)a3;
- (BOOL)shouldShowCustomizedLabel;
- (void)configRelatedLabel:(id)a0;
- (void)p_updateTagImageViewLayoutWithImage:(id)a0;
- (void)configureWithModel:(id)a0 indexPath:(id)a1;
- (void)showMaskViewWithIndexPath:(id)a0;
- (void)bindContext:(id)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;

@end
