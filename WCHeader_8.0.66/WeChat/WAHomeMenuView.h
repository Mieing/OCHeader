@class UILabel, UIView, MMWebImageView;

@interface WAHomeMenuView : WCTBaseMenuView

@property (retain, nonatomic) MMWebImageView *leftImageView;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) MMWebImageView *rightImageView;
@property (retain, nonatomic) UIView *badgeView;

+ (double)viewHeightByDataModel:(id)a0 hostView:(id)a1;

- (id)initWithCell:(id)a0;
- (void)setViewDataModel:(id)a0;
- (void)updateHomeMenuCellUIWithTipsInfo:(id)a0;
- (void)updateHomeMenuCellUIWithEntranceInfo:(id)a0;
- (void)loadUI:(id)a0;
- (void).cxx_destruct;

@end
