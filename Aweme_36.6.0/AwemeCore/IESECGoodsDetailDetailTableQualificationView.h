@class UILabel, IESECGoodsDetailDetailTableItemModel, IESECButton;

@interface IESECGoodsDetailDetailTableQualificationView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) IESECButton *openButton;
@property (retain, nonatomic) IESECGoodsDetailDetailTableItemModel *model;

- (void)clickAuthButton:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
