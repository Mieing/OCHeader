@class AWEECShoppingAIGuideMessageSingleSliceViewModel, AWEECShoppingAIGuideSliceCard, NSString;

@interface AWEECShoppingAIGuideAnswerSliceCell : AWEECShoppingAIGuideAnswerBaseCell <AWEECShoppingAIGuideBaseCardDelegate, AWEECShoppingAIGuideSliceCardDelegate>

@property (retain, nonatomic) AWEECShoppingAIGuideMessageSingleSliceViewModel *sliceViewModel;
@property (retain, nonatomic) AWEECShoppingAIGuideSliceCard *sliceCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
