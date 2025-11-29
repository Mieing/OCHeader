@class IESLivePaidQueueTabView, IESAudienceInteractiveRootPanelLinkPaidGuidenceHeader, UIImageView, UILabel, UIView, UIButton;

@interface IESLiveInteractivePanelHeaderTipsView : UITableViewHeaderFooterView

@property (retain, nonatomic) UIView *normalContentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIImageView *indicatorIcon;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *sortLeftLabel;
@property (retain, nonatomic) UILabel *sortLabel;
@property (retain, nonatomic) UIImageView *switchIcon;
@property (retain, nonatomic) IESLivePaidQueueTabView *tabContainerView;
@property (retain, nonatomic) IESAudienceInteractiveRootPanelLinkPaidGuidenceHeader *linkPaidGuideLabel;
@property (nonatomic) BOOL sortTypeContainerViewIsIndicate;
@property (nonatomic) BOOL showSortTypeContainerViewOriginal;
@property (nonatomic) BOOL disabledSort;
@property (nonatomic) double sortContainerLeftMargin;
@property (nonatomic) BOOL isPaidLinkmic;
@property (nonatomic) BOOL isMultiAddPriceEnabled;
@property (nonatomic) BOOL isInAddPriceSection;
@property (nonatomic) BOOL someOneAddPrice;
@property (retain, nonatomic) UIView *guideTipsContainerView;
@property (retain, nonatomic) UIView *indicateTipsContainerView;
@property (retain, nonatomic) UIView *sortTypeContainerView;
@property (retain, nonatomic) UIView *switchSortTypeResponseArea;
@property (copy, nonatomic) id /* block */ didTapConfirmBlock;
@property (copy, nonatomic) id /* block */ didTapCloseBlock;
@property (nonatomic) long long sortStrategy;
@property (nonatomic) BOOL isAnchor;
@property (copy, nonatomic) id /* block */ didTapSwitchSortMethodButton;
@property (copy, nonatomic) id /* block */ didTapCloseGuideBlock;
@property (copy, nonatomic) id /* block */ didTapOpenPaidLinkBlock;
@property (nonatomic) BOOL hasLinkPaidGuidence;
@property (nonatomic) BOOL showPaidQueueTabSortView;
@property (copy, nonatomic) id /* block */ didSelectedTabCallback;

- (void)didTapConfirmButton;
- (void)updateNormalWaitingCount:(long long)a0 paidWaitingCount:(long long)a1;
- (void)updateSelectedTab:(unsigned long long)a0;
- (void)showSortTypeWithIndicateTips:(BOOL)a0 disabledSort:(BOOL)a1;
- (void)updateIsPaidLinkmic:(BOOL)a0 isInAddPriceSection:(BOOL)a1 someOneAddPrice:(BOOL)a2 isMultiAddPriceEnabled:(BOOL)a3;
- (void)updateNormalContentHidden:(BOOL)a0 tabContainerHidden:(BOOL)a1;
- (void)sortViewOnContainervertically;
- (void)p_resetSortTypeContainerViewConstraint;
- (void)p_refreshSortViewUI;
- (void).cxx_destruct;
- (void)onTapAction;
- (id)initWithReuseIdentifier:(id)a0;
- (void)didTapCloseButton;
- (void)resetUI;
- (void)layoutUI;

@end
