@class UIImageView, IESECShopProductsMemberCellText, IESECShopMemberButton;

@interface IESECShopProductsMemberCellButton : UIView

@property (retain, nonatomic) UIImageView *arrow;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) IESECShopProductsMemberCellText *text;
@property (retain, nonatomic) IESECShopMemberButton *model;

- (void).cxx_destruct;
- (id)init;
- (void)updateWithModel:(id)a0;
- (void)setUpView;

@end
