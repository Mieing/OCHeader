@class UIView, AWESearchStrongAnchorProductView, AWEGeneralSearchVideoCardModel, NSString, AWESearchStrongAnchorComponentModel, UIImageView, UIButton, UILabel, AWESearchStrongAnchorPOIView;

@interface AWESearchVideoCardStrongAnchorComponent : AWESearchComponent <AWESearchVideoCardStrongAnchorComponentProtocol>

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *iconTagLabel;
@property (retain, nonatomic) AWESearchStrongAnchorPOIView *poiAnchorView;
@property (retain, nonatomic) AWESearchStrongAnchorProductView *productAnchorView;
@property (retain, nonatomic) AWEGeneralSearchVideoCardModel *bindedModel;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (nonatomic) long long type;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWESearchStrongAnchorComponentModel *model;
@property (readonly, nonatomic) double rightMargin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;

- (id)trackCommonParams;
- (id)anchorNormalInfo;
- (void)trackAnchorClick;
- (void)trackAnchorShow;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)componentViewDidStartShowing;
- (void)componentViewLayoutSubviews;
- (void)componentViewPrepareForReuse;
- (void)singleTapped:(id)a0;
- (void)setModelOnly:(id)a0;
- (void)updateAnchorTypeWithModel:(id)a0;
- (void)updateIconTagWithTagInfo:(id)a0;
- (void)layoutButtonsIfNeededWithModel:(id)a0;
- (void)trackButtonClickWithButtonInfo:(id)a0;
- (void)layoutWithoutButton;
- (void)layoutSingleButtonWithModel:(id)a0;
- (void)layoutDoubleButtonsWithModel:(id)a0;
- (void)leftButtonTapped:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)componentView;
- (void)setupUI;
- (void)rightButtonTapped:(id)a0;

@end
