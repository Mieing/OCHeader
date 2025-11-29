@class CAGradientLayer, NSString, UIImageView, UILabel, UIView;

@interface ACCScanQuestionMaskView : ACCScanBaseMaskView <ACCScanQuestionMaskViewStudioProxy>

@property (retain, nonatomic) UIView *leftLine;
@property (retain, nonatomic) UIView *rightLine;
@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) CAGradientLayer *leftLineShadowLayer;
@property (retain, nonatomic) CAGradientLayer *rightLineShadowLayer;
@property (retain, nonatomic) UILabel *bottomTipView;
@property (retain, nonatomic) UILabel *tabAlertLabel;
@property (retain, nonatomic) UIImageView *tabAlertImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)needShowBottomTipView;
- (id)tabAlertName;
- (BOOL)needAutoHideAlert;
- (id)tabAlertImage;
- (void).cxx_destruct;
- (void)setupUI;

@end
