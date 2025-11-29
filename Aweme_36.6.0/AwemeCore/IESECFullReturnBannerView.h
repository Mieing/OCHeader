@class NSString, IESECURLModel, UIImageView, IESECGoodsFullReturnModel, UIView, UILabel;

@interface IESECFullReturnBannerView : UIView

@property (copy, nonatomic) NSString *fullReturnText;
@property (copy, nonatomic) NSString *hasBuy;
@property (copy, nonatomic) NSString *needBuy;
@property (retain, nonatomic) IESECURLModel *backgroundImageURL;
@property (retain, nonatomic) IESECURLModel *fullReturnIconURL;
@property (retain, nonatomic) IESECGoodsFullReturnModel *fullReturnInfo;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *backgroundImage;
@property (retain, nonatomic) UIImageView *fullReturnIcon;
@property (retain, nonatomic) UILabel *fullReturnLabel;
@property (retain, nonatomic) UILabel *progressLabel;
@property (retain, nonatomic) UIImageView *moreIcon;
@property (nonatomic) long long viewStyle;

- (void)updateWithParameters:(id)a0;
- (void)setupProgressLabel;
- (id)initWithParameters:(id)a0 style:(long long)a1;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateUI:(id)a0;

@end
