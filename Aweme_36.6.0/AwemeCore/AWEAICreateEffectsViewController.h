@class NSString, NSArray, NSMutableDictionary, AWEAICreateEffectsKeyWordsView, AWEAICreateEffectsPropView, UIButton, IESEffectModel, AWEAICreateEffectsNaviView;

@interface AWEAICreateEffectsViewController : AWEHalfScreenSuperViewController <AWEAICreateEffectsViewControllerProtocol>

@property (retain, nonatomic) AWEAICreateEffectsNaviView *naviView;
@property (retain, nonatomic) AWEAICreateEffectsPropView *propView;
@property (retain, nonatomic) AWEAICreateEffectsKeyWordsView *keyWordsView;
@property (retain, nonatomic) UIButton *completeButton;
@property (copy, nonatomic) NSArray *aiEffectModels;
@property (retain, nonatomic) IESEffectModel *selectedModel;
@property (nonatomic) long long currentSelectIndex;
@property (nonatomic) BOOL isFirstLoad;
@property (nonatomic) BOOL forceDarkStyle;
@property (retain, nonatomic) NSMutableDictionary *trackInfo;
@property (copy, nonatomic) NSString *selectedEffectId;
@property (copy, nonatomic) NSArray *selectedKeyWords;
@property (copy, nonatomic) NSString *selectedKeyWordsString;
@property (nonatomic) BOOL isMultiStyle;
@property (nonatomic) BOOL completeDismiss;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (copy, nonatomic) id /* block */ enterBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accui_emptyPageConfigForState:(unsigned long long)a0;
- (void)accui_emptyPagePrimaryButtonTapped:(id)a0;
- (id)accui_emptyPageOnView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })accui_emptyPageEdgeInsets;
- (BOOL)onlyTopCornerClips;
- (BOOL)useSmootherTransition;
- (id)keywordsConvertToModels:(id)a0;
- (void)fetchCreatAIData;
- (void)preLoadEffectResoure:(id)a0;
- (BOOL)usePreloadHuafengEffects;
- (void)handleServerData:(id)a0;
- (id)filterIsMultiStyle:(id)a0;
- (void)trackSelectAIStyle;
- (void)setUpUIView;
- (void)trackClickKeywords:(id)a0 isSelected:(BOOL)a1 isCustomKey:(BOOL)a2;
- (void)trackClickAddKeywords;
- (void)completeButtonAction:(id)a0;
- (void)trackClickCompletionButton:(id)a0;
- (id)trackClickCommonTrackInfo;
- (void).cxx_destruct;
- (unsigned long long)viewStyle;
- (double)cornerRadius;
- (unsigned long long)animationStyle;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (double)containerHeight;
- (double)containerWidth;

@end
