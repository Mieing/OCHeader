@class IESECMatchPurchaseModel, IESECMatchPurchaseGoodsBuyView, UILabel, UIView, IESECUIImageView;

@interface IESECMatchPurchaseHalfScreenCell : UITableViewCell

@property (retain, nonatomic) UIView *liveView;
@property (retain, nonatomic) UILabel *liveMatchPurchaseLabel;
@property (retain, nonatomic) UIView *duxLine;
@property (retain, nonatomic) IESECUIImageView *closeButton;
@property (retain, nonatomic) IESECMatchPurchaseModel *model;
@property (readonly, nonatomic) IESECMatchPurchaseGoodsBuyView *goodsBuyView;
@property (copy, nonatomic) id /* block */ dissmiss;

- (void)close;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
