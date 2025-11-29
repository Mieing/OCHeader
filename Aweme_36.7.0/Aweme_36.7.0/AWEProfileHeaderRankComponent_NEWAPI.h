@class UIView, AWEProfileBillboardButton, AWEProfileHeaderVirtualView;

@interface AWEProfileHeaderRankComponent_NEWAPI : AWEProfileHeaderBaseComponent

@property (retain, nonatomic) AWEProfileHeaderVirtualView *virtualView;
@property (retain, nonatomic) AWEProfileBillboardButton *button;
@property (retain, nonatomic) UIView *containerView;

- (id)buildVirtualView:(id)a0;
- (BOOL)shouldShowRank;
- (void)updateComponentData:(id)a0;
- (void)configButton;
- (BOOL)shouldShowBrandInfo;
- (BOOL)shouldShowDogCard;
- (void).cxx_destruct;

@end
