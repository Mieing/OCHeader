@class AWEECShoppingAIGuideCardSettingProvider;
@protocol AWEECShoppingAIGuideAnswerBaseCellDelegate;

@interface AWEECShoppingAIGuideAnswerBaseCell : AWEECShoppingAIGuideBubbleCell

@property (weak, nonatomic) id<AWEECShoppingAIGuideAnswerBaseCellDelegate> delegate;
@property (weak, nonatomic) AWEECShoppingAIGuideCardSettingProvider *cardProvider;

- (void).cxx_destruct;

@end
