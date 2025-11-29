@class UIView, MMWebImageView, MMUIActivityIndicatorView, UIImageView, MMUIView, FinderLiveIncomePageItem, MMUILabel, MMUIButton, UILabel;
@protocol MMFinderLiveFetchMoneyTableCellDelegate;

@interface MMFinderLiveFetchMoneyTableCell : WCTableViewNormalCellManager

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMWebImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) MMUIButton *taxButton;
@property (retain, nonatomic) UILabel *balanceLabel;
@property (retain, nonatomic) MMUILabel *tipsLabel;
@property (retain, nonatomic) UIView *pendingBalanceView;
@property (retain, nonatomic) UIImageView *leftImageView;
@property (retain, nonatomic) UILabel *pendingBalanceLabel;
@property (retain, nonatomic) MMUILabel *subTipsLabel;
@property (retain, nonatomic) MMUIView *tipsContainerView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *seperatorUpView;
@property (retain, nonatomic) UIView *seperatorDownView;
@property (retain, nonatomic) MMUIButton *encashLabel;
@property (retain, nonatomic) MMUIButton *detailLabel;
@property (nonatomic) double maxContentWidth;
@property (retain, nonatomic) FinderLiveIncomePageItem *incomePageItem;
@property (weak, nonatomic) id<MMFinderLiveFetchMoneyTableCellDelegate> delegate;
@property (nonatomic) unsigned int businessId;
@property (nonatomic) BOOL isWaiting;
@property (retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView;

- (id)initWithIncomePageItem:(id)a0 maxContentWidth:(double)a1 delegate:(id)a2;
- (void)initViews;
- (void)initAmount;
- (id)amountText;
- (void)initSubTips;
- (void)initDetailAndEncashButton;
- (void)initCell;
- (void)layoutUI;
- (long long)dealWithBalance:(long long)a0 withBusinessId:(unsigned int)a1;
- (void)clickBalance;
- (void)startEncash;
- (void)readDetail;
- (void).cxx_destruct;

@end
