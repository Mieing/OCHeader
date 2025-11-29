@class UIView, UILabel, IESECUIImageView, NSString, UIImageView, CAShapeLayer, IESECMallADLogoView, UIColor;

@interface IESECMallLiveAuthorView : UIView <IESECMallCardAuthorInfoProtocol>

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIView *avatarImageMaskView;
@property (nonatomic) long long circleLayerRadius;
@property (retain, nonatomic) CAShapeLayer *avatarImageViewInnerShape;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) IESECUIImageView *hotIconImageView;
@property (retain, nonatomic) UILabel *hotLabel;
@property (retain, nonatomic) IESECMallADLogoView *adLogo;
@property (retain, nonatomic) UIColor *hotLabelDefaultColorLite;
@property (retain, nonatomic) UIColor *compactHotLabelColor;
@property (retain, nonatomic) UIColor *nickNameLabelDefaultColor;
@property (retain, nonatomic) UIColor *nickNameLabelDefaultColorLite;
@property (copy, nonatomic) NSString *bizTag;
@property (copy, nonatomic) NSString *sceneTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillDisplay;
- (void)viewDidEndDisplay;
- (void)setupAvatarInnerMaskWithWidth:(long long)a0 borderWidth:(double)a1;
- (id)getHotLabelText:(long long)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)init;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
