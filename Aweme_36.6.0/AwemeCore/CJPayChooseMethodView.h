@class CJPayMethodCellTagView, CJPayDefaultChannelShowConfig, UIImageView, NSString, UILabel, UIView, MASConstraint;

@interface CJPayChooseMethodView : UIView <CJPayBaseLoadingProtocol>

@property (retain, nonatomic) UILabel *leftTitleLabel;
@property (retain, nonatomic) UIImageView *rightArrow;
@property (retain, nonatomic) UIImageView *cardIconView;
@property (retain, nonatomic) UILabel *cardLabel;
@property (retain, nonatomic) UILabel *cardDescLabel;
@property (retain, nonatomic) UIView *clickView;
@property (retain, nonatomic) CJPayMethodCellTagView *discountView;
@property (retain, nonatomic) MASConstraint *bottomBaseCardLabelConstraint;
@property (retain, nonatomic) MASConstraint *bottomBaseCardDescConstraint;
@property (retain, nonatomic) MASConstraint *bottomBaseDisountViewConstraint;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *selectConfig;
@property (nonatomic) unsigned long long comeFromSceneType;
@property (nonatomic) long long cardNum;
@property (nonatomic) unsigned long long sceneType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_adapterTheme;
- (BOOL)p_isSelectConfigValid;
- (id)p_addBankDesc;
- (void)updateWithDefaultDiscount:(id)a0;
- (void).cxx_destruct;
- (void)startLoading;
- (void)updateContent;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopLoading;
- (void)didMoveToWindow;
- (void)setupView;
- (void)click;

@end
