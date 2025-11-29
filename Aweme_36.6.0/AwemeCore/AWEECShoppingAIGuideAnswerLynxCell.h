@class AWEECShoppingAIGuideLynxCard, NSString, AWEECShoppingAIGuideMessageSingleLynxViewModel;

@interface AWEECShoppingAIGuideAnswerLynxCell : AWEECShoppingAIGuideAnswerBaseCell <AWEECShoppingAIGuideLynxCardDelegate>

@property (retain, nonatomic) AWEECShoppingAIGuideLynxCard *lynxCard;
@property (retain, nonatomic) AWEECShoppingAIGuideMessageSingleLynxViewModel *lynxViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
