@class AWEAwemeModel, AWEPlayInteractionBaseElement, NSString, AWEPageContext, UIImageView, BDImageView, UILabel, UIColor;
@protocol AWEPlayInteractionContextProtocol;

@interface AWEFeedLearnMoreModifyButtonView : UIView <AWEFeedLearnMoreModifyButtonProtocol>

@property (retain, nonatomic) UIColor *finalBackgroundColor;
@property (retain, nonatomic) UIColor *finalTextColor;
@property (weak, nonatomic) AWEAwemeModel *aweme;
@property (weak, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (weak, nonatomic) AWEPlayInteractionBaseElement *element;
@property (retain, nonatomic) BDImageView *iconImageView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIImageView *guideImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowButtonWithAweme:(id)a0;

- (void)playFlashAnimated:(BOOL)a0;
- (long long)buttonNewStyle;
- (BOOL)shouldChangeButtonColor;
- (id)initWithAweme:(id)a0 context:(id)a1 element:(id)a2;
- (void)playAdLearnMoreViewAnimation;
- (id)textString;
- (void)setupTipsLabel;
- (void)setupArrowImageView;
- (void).cxx_destruct;
- (id)defaultTextColor;
- (id)defaultBackgroundColor;
- (void)reset;
- (void)setupUI;

@end
