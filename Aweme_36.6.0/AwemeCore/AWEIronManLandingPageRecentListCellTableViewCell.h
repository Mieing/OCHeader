@class NSMutableArray, AWEIronManLandingPageCommonItemModel, UIImageView, UILongPressGestureRecognizer, UILabel, UIView, UIButton;

@interface AWEIronManLandingPageRecentListCellTableViewCell : UITableViewCell

@property (retain, nonatomic) AWEIronManLandingPageCommonItemModel *model;
@property (retain, nonatomic) UIButton *bgView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *tipsView;
@property (retain, nonatomic) NSMutableArray *tipLabelArr;
@property (nonatomic) long long index;
@property (retain, nonatomic) UILongPressGestureRecognizer *press;
@property (copy, nonatomic) id /* block */ actionBlock;

- (void)awe_themeDidChange:(long long)a0;
- (void)clickAction;
- (void)updateTips:(id)a0;
- (void)updateContentWithModel:(id)a0;
- (void)deliverActionToDelegate:(long long)a0;
- (void)themeUIUpdate;
- (id)buildTipLabel;
- (void)longPress:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setUpUI;

@end
