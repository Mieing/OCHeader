@class UIButton, BDPCDDynamicCardPriceView, UIImageView, AWEECOMIMExtraCardModel, UIView, UILabel, YYLabel;

@interface AWEECOMIMExtraOrderOldView : UIView

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *logoView;
@property (retain, nonatomic) UIImageView *importantActivitiesView;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) BDPCDDynamicCardPriceView *priceView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *sendButton;
@property (retain, nonatomic) AWEECOMIMExtraCardModel *itemModel;
@property (copy, nonatomic) id /* block */ clickSendBlock;
@property (copy, nonatomic) id /* block */ clickCloseBlock;

- (void)closeButtonClick:(id)a0;
- (void)updateWithItemModel:(id)a0;
- (void)sendButtonClick:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
