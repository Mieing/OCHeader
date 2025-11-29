@class RichTextView, UIButton, NSString, EmoticonBoardCrossCollectionRecommendEmoticonHeaderViewModel, UILabel, UIView, MMUILabel;
@protocol EmoticonBoardCrossCollectionRecommendEmoticonHeaderViewDelegate;

@interface EmoticonBoardCrossCollectionRecommendEmoticonHeaderView : UICollectionReusableView <ILinkEventExt>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *fullPrivacyView;
@property (retain, nonatomic) MMUILabel *recommendationTitleLabel;
@property (retain, nonatomic) RichTextView *recommendationIntroduceView;
@property (retain, nonatomic) UIButton *fullPrivacyConfirmButton;
@property (retain, nonatomic) UIButton *fullPrivacyCloseButton;
@property (retain, nonatomic) UIView *briefPrivacyView;
@property (retain, nonatomic) UIView *briefPrivacyViewTopline;
@property (retain, nonatomic) UIView *briefPrivacyViewBottomline;
@property (retain, nonatomic) MMUILabel *briefPrivacyTitle;
@property (retain, nonatomic) UIButton *briefPrivacyTipButton;
@property (retain, nonatomic) UIButton *briefPrivacyConfirmButton;
@property (retain, nonatomic) UIButton *briefPrivacyCancelButton;
@property (weak, nonatomic) id<EmoticonBoardCrossCollectionRecommendEmoticonHeaderViewDelegate> delegate;
@property (retain, nonatomic) EmoticonBoardCrossCollectionRecommendEmoticonHeaderViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForPrivacyViewWithWidth:(double)a0 type:(unsigned long long)a1 text:(id)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupFullPrivacyView;
- (void)fullPrivacyCloseButtonTouchDown:(id)a0;
- (void)fullPrivacyCloseButtonTouchUp:(id)a0;
- (void)setupBriefPrivacyView;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)createOrUpdateLayout;
- (void)configureFullPrivacyViewLayoutWithFlex:(void *)a0;
- (void)configureBriefPrivacyViewLayoutWithFlex:(void *)a0;
- (void)onClickFullPrivacyConfirmButton;
- (void)onClickFullPrivacyCancelButton;
- (void)onClickBriefPrivacyTipButton;
- (void)onClickBriefPrivacyConfirmButton;
- (void)onClickBriefPrivacyCancelButton;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
