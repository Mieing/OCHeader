@class NSString, AWEGeneralSearchVideoCardModel, UIView, UIViewController;
@protocol AWESearchVideoRecommendedWordViewProtocol;

@interface AWESearchVideoCardRecommendWordComponent : AWESearchComponent <AWESearchVideoCardRecommendWordComponentProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIViewController<AWESearchVideoRecommendedWordViewProtocol> *videoRecommendedWordView;
@property (retain, nonatomic) AWEGeneralSearchVideoCardModel *bindedModel;
@property (nonatomic) BOOL hasRecommWord;
@property (nonatomic) BOOL isRelatedCardNotNext;
@property (nonatomic) BOOL isEcomRecommendWordMode;
@property (nonatomic) double videoRecommWordHeight;
@property (nonatomic) BOOL currentModelFromSetupModelOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;

- (void)componentDidLoad;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)componentViewDidEndShowing;
- (void)updateWithChunkModel:(id)a0;
- (id)provideProtocol;
- (void)updateComponentSize;
- (void)setModelOnly:(id)a0;
- (id)accessibilityElementsArr;
- (id)p_context;
- (BOOL)shouldShowVideoRecommendedWord:(id)a0;
- (void)handleVideoRecommendedWordViewShow:(id)a0 awemeModel:(id)a1 extraParams:(id)a2 failureCallback:(id /* block */)a3;
- (void)setupABTest;
- (void)endShowVideoRecommWordView;
- (void)showVideoRecommWordView:(id)a0;
- (void)p_updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (id)componentView;

@end
