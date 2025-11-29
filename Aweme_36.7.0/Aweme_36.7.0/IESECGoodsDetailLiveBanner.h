@class NSString, IESECGoodsDetailParameters, UILabel, IESECUIImageView;

@interface IESECGoodsDetailLiveBanner : UIView <IESECGoodsDetailParametersProtocol>

@property (retain, nonatomic) IESECUIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (weak, nonatomic) IESECGoodsDetailParameters *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
