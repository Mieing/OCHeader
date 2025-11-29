@class NSString, AWEECShoppingAIGuideAnswerDynamicTextCell, AWEECShoppingAIGuideCardSettingProvider, AWEECShoppingAIGuideContext, AWEECShoppingAIGuideMessageGroupViewModel;
@protocol AWEECShoppingAIGuideAnswerBaseCellDelegate, AWEECShoppingAIGuideContentSectionControllerDelegate;

@interface AWEECShoppingAIGuideContentSectionController : IGListSectionController <IGListSupplementaryViewSource>

@property (retain, nonatomic) AWEECShoppingAIGuideContext *context;
@property (retain, nonatomic) AWEECShoppingAIGuideMessageGroupViewModel *msgGroupViewModels;
@property (weak, nonatomic) id<AWEECShoppingAIGuideAnswerBaseCellDelegate> answerCellDelegate;
@property (retain, nonatomic) AWEECShoppingAIGuideAnswerDynamicTextCell *dynamicTextAnswerCell;
@property (weak, nonatomic) id<AWEECShoppingAIGuideContentSectionControllerDelegate> delegate;
@property (weak, nonatomic) AWEECShoppingAIGuideCardSettingProvider *cardProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (id)supportedElementKinds;
- (id)viewForSupplementaryElementOfKind:(id)a0 atIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForSupplementaryViewOfKind:(id)a0 atIndex:(long long)a1;
- (void)didUpdateToObject:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
