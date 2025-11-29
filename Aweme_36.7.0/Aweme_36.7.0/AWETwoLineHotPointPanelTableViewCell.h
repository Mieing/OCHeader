@class UIView, NSString, AWENewHotSearchModel, AWEHotSpotInnerContext, UIImageView, UIButton, LOTAnimationView, UILabel;

@interface AWETwoLineHotPointPanelTableViewCell : UITableViewCell <AWEHotPointPanelTableViewCellProtocol>

@property (retain, nonatomic) UILabel *indexLabel;
@property (retain, nonatomic) UIImageView *hotSpotImageView;
@property (retain, nonatomic) UILabel *hotSpotContentLabel;
@property (retain, nonatomic) UIImageView *hotCountIconView;
@property (retain, nonatomic) UILabel *useCountLabel;
@property (retain, nonatomic) UIImageView *tagImageView;
@property (retain, nonatomic) LOTAnimationView *hotLiveLottieView;
@property (retain, nonatomic) UILabel *relationLabel;
@property (retain, nonatomic) UIImageView *risingHotSpotImageView;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIView *hotSpotImageMaskView;
@property (retain, nonatomic) UIView *contentLabelMaskView;
@property (retain, nonatomic) UIView *useCountLabelMaskView;
@property (retain, nonatomic) AWENewHotSearchModel *model;
@property (retain, nonatomic) AWEHotSpotInnerContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;
+ (double)cellHeight;

- (void)hideMaskView;
- (void)configUI;
- (void)configureWithModel:(id)a0 showAction:(BOOL)a1 indexPath:(id)a2;
- (void)configureWithModel:(id)a0 indexPath:(id)a1;
- (void)showMaskViewWithIndexPath:(id)a0;
- (void)bindContext:(id)a0;
- (void)p_updateTagImageViewLayoutWithImage:(id)a0 showAction:(BOOL)a1;
- (void)configMaskViewUI;
- (id)logExtraWithHotSpotAndSearch;
- (void)action;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
