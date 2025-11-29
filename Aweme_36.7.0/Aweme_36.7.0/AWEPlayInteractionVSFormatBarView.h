@class UIView, AWEPlayInteractionVSFormatTagView, UITapGestureRecognizer, NSString, UIImageView, CAGradientLayer, AWELiveVSStruct, UILabel;

@interface AWEPlayInteractionVSFormatBarView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *programLabel;
@property (retain, nonatomic) UIView *rightContainerView;
@property (retain, nonatomic) UIImageView *rightArrow;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) AWEPlayInteractionVSFormatTagView *tagView;
@property (retain, nonatomic) UILabel *nameSeperateLabel;
@property (retain, nonatomic) UILabel *pvLabel;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (retain, nonatomic) AWELiveVSStruct *model;
@property (nonatomic) long long barType;
@property (copy, nonatomic) id /* block */ barTapped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateByModel:(id)a0;
- (BOOL)p_enableShowPV:(id)a0;
- (void)p_configVSIcon:(id)a0;
- (double)leftIconSizeHeight;
- (double)playBackIconSizeWidth;
- (double)rightArrowSizeWH;
- (void)updateFontSizeIfNeededForLabel:(id)a0;
- (void)addTapGesture;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)init;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)tapped;
- (void)initUI;

@end
