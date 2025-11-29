@class UIImageView, LSIMMessageCardOrderCellVM, UILabel, UIView;

@interface LSIMMessageOrderCellView : LSIMChatDetailBaseCellView

@property (retain, nonatomic) UIView *cardView;
@property (retain, nonatomic) UIImageView *mainImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIView *seperatorView;
@property (retain, nonatomic) UILabel *orderNumberLabel;
@property (retain, nonatomic) UILabel *orderTimeLabel;
@property (retain, nonatomic) LSIMMessageCardOrderCellVM *cellVM;

- (void)configWithCellVM:(id)a0;
- (void)handleContainerTapGesture:(id)a0;
- (id)orderDetailStringWithTitle:(id)a0 detailInfo:(id)a1;
- (void)setupContainerView;
- (void).cxx_destruct;
- (void)updateImageView;

@end
