@class AWEIMGeneralDisableCardView, AWEIMGeneralCardView;
@protocol AWEIMCommonInviteTableViewCellViewModelProtocol;

@interface AWEIMCommonInviteTableViewCell : AWEIMUserMessageTableViewCell

@property (retain, nonatomic) id<AWEIMCommonInviteTableViewCellViewModelProtocol> cellViewModel;
@property (retain, nonatomic) AWEIMGeneralCardView *cardView;
@property (retain, nonatomic) AWEIMGeneralDisableCardView *unavailableView;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)viewModelWithMessage:(id)a0 conversation:(id)a1;
+ (id)identifier;

- (void)configWithMessage:(id)a0;
- (void)p_enterBtnTapped;
- (void)p_addsubViews;
- (void)p_configWithMessageCore:(id)a0;
- (void)configContentWithCellViewModel:(id)a0;
- (void)p_configTitle:(id)a0;
- (void)p_configCoverImageURLStr:(id)a0;
- (void)p_configDetailLabel:(id)a0;
- (void)p_configCoverImage;
- (void)p_configHidden;
- (void)p_refreshMessageInfoIfNeeded:(id)a0;
- (void)traceCellWillDisplay;
- (void).cxx_destruct;
- (void)updateView;
- (id)menuItems;
- (void)layoutSubviews;
- (void)setupUI;
- (void)willDisplayCell;

@end
