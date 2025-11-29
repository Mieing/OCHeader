@class UIImageView, UILabel;

@interface IESECGoodsFeedResourceCardHeaderView : UIView

@property (retain, nonatomic) UIImageView *headerTitleImageView;
@property (retain, nonatomic) UILabel *headerTitleLabel;
@property (retain, nonatomic) UIImageView *headerSubTitleImageView;
@property (retain, nonatomic) UILabel *headerSubTitleLabel;
@property (retain, nonatomic) UIImageView *headerLeftArrowView;
@property (retain, nonatomic) UILabel *headerLinkInfoLabel;

- (void)addSubviews;
- (void)setupUIWithModel:(id)a0;
- (void)buildShoppingMallHeaderViewWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
