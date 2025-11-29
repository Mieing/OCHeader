@class IESECBuyNowSkeletonModel, UIImageView, NSDictionary, UIView, UILabel, IESECUIImageView;
@protocol IESECBuyNowStateProtocol;

@interface IESECBuyNowStateView : UIView

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) IESECUIImageView *mainImageView;
@property (retain, nonatomic) IESECUIImageView *footImageView;
@property (retain, nonatomic) UIView *containView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *actionLabel;
@property (retain, nonatomic) IESECUIImageView *closeView;
@property (retain, nonatomic) NSDictionary *defaultConfig;
@property (nonatomic) unsigned long long actionType;
@property (retain, nonatomic) IESECBuyNowSkeletonModel *skeletonModel;
@property (nonatomic) double viewScale;
@property (nonatomic) double fontScale;
@property (nonatomic) double contentScale;
@property (weak, nonatomic) id<IESECBuyNowStateProtocol> clickDelegate;

- (void)actionLabelClick;
- (void)closeViewClick;
- (id)initWithModel:(id)a0 fontScale:(double)a1 viewScale:(double)a2 fitPhoneWidth:(BOOL)a3;
- (void)updateWithConfig:(id)a0 closePosition:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)setupUI;

@end
