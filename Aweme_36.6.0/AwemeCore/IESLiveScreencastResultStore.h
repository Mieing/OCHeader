@class ListCategoryResponse_CategoryNode, NSString;

@interface IESLiveScreencastResultStore : NSObject <IESLiveScreenshotActions, IESLiveMessageInteractionModuleCommentAction>

@property (retain, nonatomic) ListCategoryResponse_CategoryNode *selectedCategory;
@property (nonatomic) BOOL needHiddenResultView;
@property (nonatomic) BOOL needShowLoadingAnimation;
@property (retain, nonatomic) NSString *resultButtonTitle;
@property (retain, nonatomic) NSString *resultTipString;
@property (nonatomic) BOOL hasHideCuzKeyboard;
@property (readonly, nonatomic) BOOL needHiddenResultTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getSelectedCategory;
- (void)updateSelectCategory:(id)a0;
- (void)bindXLiveObserveActions;
- (id)initWithRoom:(id)a0 attachingDIContext:(id)a1;
- (BOOL)openCurrentGameApp;
- (void)setButtonTitleAndTipString;
- (void)keyboardWillHide;
- (void)keyboardWillShow;
- (void).cxx_destruct;

@end
