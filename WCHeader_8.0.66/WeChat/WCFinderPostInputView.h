@class NSString, WCFinderPostUsualTopicContainerView, WCFinderPostUsualTopicLogic, UIButton;
@protocol WCFinderPostInputViewDelegate;

@interface WCFinderPostInputView : UIImageView <WCFinderPostUsualTopicContainerViewDelegate>

@property (retain, nonatomic) UIButton *expressionButton;
@property (retain, nonatomic) WCFinderPostUsualTopicLogic *usualTopicLogic;
@property (retain, nonatomic) WCFinderPostUsualTopicContainerView *topicContainerView;
@property (nonatomic) int commentScene;
@property (weak, nonatomic) id<WCFinderPostInputViewDelegate> delegate;
@property (nonatomic) BOOL forbidRecommendTopic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputViewStyle:(unsigned long long)a1 commentScene:(int)a2;
- (void)onExpressionButtonClicked:(id)a0;
- (void)reloadExpressionButtonImageMode:(long long)a0;
- (void)updateInputViewStyle:(unsigned long long)a0;
- (void)updateTopicWithTextTopicModel:(id)a0;
- (void)horizonViewClickItemWith:(id)a0 inputTextTopicModel:(id)a1 dataIndex:(long long)a2;
- (void).cxx_destruct;

@end
