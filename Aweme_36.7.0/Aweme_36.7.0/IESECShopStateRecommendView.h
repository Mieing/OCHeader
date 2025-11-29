@class UIButton, UILabel, UIImageView;

@interface IESECShopStateRecommendView : UIView

@property (retain, nonatomic) UIButton *shopEntryButton;
@property (retain, nonatomic) UILabel *emptyTitleLabel;
@property (retain, nonatomic) UILabel *emptyDetailLabel;
@property (retain, nonatomic) UIImageView *emptyImageView;

- (void)isShowEntry:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
