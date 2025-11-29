@class UIView, NSString, RACCompoundDisposable, UIImageView, HTSPaddingLabel, IESLiveFunctionSquareRowNode, UILabel, IESLiveAnchorInteractiveGameLoadingView;
@protocol IESLiveFunctionSquareCategoryContentTableViewCellDelegate;

@interface IESLiveFunctionSquareCategoryContentTableViewCellV2 : IESLiveFunctionSquareBaseTableViewCell <IESLiveFunctionSquareCategoryContentCell>

@property (weak, nonatomic) id<IESLiveFunctionSquareCategoryContentTableViewCellDelegate> delegate;
@property (retain, nonatomic) UIView *leftContainerView;
@property (retain, nonatomic) UIImageView *leftImageView;
@property (retain, nonatomic) HTSPaddingLabel *iconTagLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) HTSPaddingLabel *titleTagLabel;
@property (retain, nonatomic) UIView *tagView;
@property (retain, nonatomic) HTSPaddingLabel *firstTagLabel;
@property (retain, nonatomic) HTSPaddingLabel *secondTagLabel;
@property (retain, nonatomic) HTSPaddingLabel *thirdTagLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *highlightIcon;
@property (retain, nonatomic) UIView *redDotView;
@property (retain, nonatomic) HTSPaddingLabel *redDotLabel;
@property (retain, nonatomic) HTSPaddingLabel *linkButton;
@property (retain, nonatomic) HTSPaddingLabel *debugButton;
@property (retain, nonatomic) IESLiveAnchorInteractiveGameLoadingView *loadingView;
@property (retain, nonatomic) IESLiveFunctionSquareRowNode *rowNode;
@property (retain, nonatomic) RACCompoundDisposable *compoundDisposable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightOfDefault;

- (id)createLabel;
- (id)configHighLightDescText:(id)a0;
- (void)configHighLightTagsWithNode:(id)a0;
- (void)configTagsWithNode:(id)a0;
- (void)configRightButtonWithNode:(id)a0;
- (void)configLoadingWithNode:(id)a0;
- (void)configDebugButtonWithNode:(id)a0;
- (void)p_setDefaultTagLabel:(id)a0;
- (void)p_setHighLightTagLabel:(id)a0 withNode:(id)a1;
- (BOOL)p_enableHighlightLabel;
- (void)onLinkButtonTapped;
- (void)onDebugButtonTapped;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 isBeforeLive:(BOOL)a2;
- (void)updateWithRowNode:(id)a0;
- (void)updateLayoutIfNeeded;
- (void).cxx_destruct;
- (void)setupUI;

@end
