@class UIButton, NSString;
@protocol AWEIMChatCellRecommendChatPresenterDelegate;

@interface AWEIMChatCellRecommendChatLIView : UIView <AWEIMChatCellRecommendChatPresenterViewInterface>

@property (retain, nonatomic) UIButton *lightInteractionBtn;
@property (weak, nonatomic) id<AWEIMChatCellRecommendChatPresenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
