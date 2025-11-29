@class UIImageView, LSIMMessageCardGoodsCellVM, UILabel, UIView;

@interface LSIMMessageGoodsCellView : LSIMChatDetailBaseCellView

@property (retain, nonatomic) UIView *cardView;
@property (retain, nonatomic) UIImageView *mainImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) LSIMMessageCardGoodsCellVM *cellVM;

- (void)configWithCellVM:(id)a0;
- (void)handleContainerTapGesture:(id)a0;
- (void)setupContainerView;
- (void).cxx_destruct;
- (void)updateImageView;

@end
