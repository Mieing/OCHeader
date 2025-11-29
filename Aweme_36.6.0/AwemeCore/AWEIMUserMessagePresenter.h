@class AWEIMUIViewPresenter;

@interface AWEIMUserMessagePresenter : AWEIMGestureUIViewPresenter

@property (retain, nonatomic) AWEIMUIViewPresenter *messageContainer;
@property (retain, nonatomic) AWEIMUIViewPresenter *avatarContainer;
@property (retain, nonatomic) AWEIMUIViewPresenter *bodyContainer;
@property (retain, nonatomic) AWEIMUIViewPresenter *bodyHeaderContainer;
@property (retain, nonatomic) AWEIMUIViewPresenter *bodyNameContainer;
@property (retain, nonatomic) AWEIMUIViewPresenter *bubbleContainer;
@property (retain, nonatomic) AWEIMUIViewPresenter *bubbleInnerContainer;
@property (retain, nonatomic) AWEIMUIViewPresenter *bubble;
@property (retain, nonatomic) AWEIMUIViewPresenter *foldMessageContainer;
@property (retain, nonatomic) AWEIMUIViewPresenter *bodyFooterContainer;

- (void)didReceiveProps:(id)a0;
- (double)p_bubbleMaxWidth;
- (void)p_updateBubblePaddingWithStyle:(id)a0 props:(id)a1;
- (void)updateBubbleMaxWidth;
- (void)updateBubblePadding;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
