@class AWEHotSpotInnerContext, NSString, UIImageView, AWENewHotSearchModel, UILabel, UIView, YYLabel;

@interface AWEIPHotSpotPanelTableViewCell : UITableViewCell <AWEHotPointPanelTableViewCellProtocol>

@property (retain, nonatomic) UILabel *wordLabel;
@property (retain, nonatomic) UILabel *timeAndRankLabel;
@property (copy, nonatomic) NSString *timeStr;
@property (copy, nonatomic) NSString *rankStr;
@property (retain, nonatomic) YYLabel *hotValueLabel;
@property (copy, nonatomic) NSString *hotValue;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *lineView;
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
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
