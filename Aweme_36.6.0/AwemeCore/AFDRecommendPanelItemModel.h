@class AWERelativeUserModel, AFDRecommendPanelBubbleModel, AFDRecommendPanelTextModel, NSString;

@interface AFDRecommendPanelItemModel : NSObject <AWEListDiffable>

@property (retain, nonatomic) AWERelativeUserModel *userModel;
@property (retain, nonatomic) AFDRecommendPanelBubbleModel *bubbleModel;
@property (retain, nonatomic) AFDRecommendPanelTextModel *textModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diffIdentifierKey;
- (void).cxx_destruct;

@end
