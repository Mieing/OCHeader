@class IESLiveButton, IESLiveCustomButton, IESLiveRevenueInteractBattleChooseItem, UILabel, IESLiveImageView, UIView;
@protocol IESLiveCompoundSubscription;

@interface IESLiveRevenueInteractBattleChooseCell : UITableViewCell

@property (retain, nonatomic) IESLiveRevenueInteractBattleChooseItem *item;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *limitTimeLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) IESLiveButton *textBadgeView;
@property (retain, nonatomic) IESLiveImageView *imageBadgeView;
@property (retain, nonatomic) IESLiveCustomButton *actionButton;
@property (retain, nonatomic) IESLiveImageView *titleIconButton;
@property (retain, nonatomic) UILabel *tagTextView;
@property (retain, nonatomic) UILabel *disabledButton;
@property (retain, nonatomic) IESLiveImageView *backgroundImageView;
@property (retain, nonatomic) UIView *leadingView;
@property (copy, nonatomic) id /* block */ battleEditBlock;
@property (copy, nonatomic) id /* block */ titleIconActionBlock;

- (void)bindData;
- (void)setupBackGroundImageView;
- (void)setupTitleIconButton;
- (void)setupBadgeView;
- (void)setupBattleEditView;
- (void)setupTagTextView;
- (void)onBattleEditClicked;
- (void)onTitleIconButtonClicked;
- (void)onActionButtonClicked;
- (void)setupSubViews;
- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)setupButton;
- (void)setupSubTitle;

@end
