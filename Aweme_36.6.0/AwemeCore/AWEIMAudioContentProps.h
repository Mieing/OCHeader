@class AWEIMMessage, AWEIMAudioMessageViewModel;

@interface AWEIMAudioContentProps : AWEIMUIViewPresenterProps

@property (retain, nonatomic) AWEIMMessage *message;
@property (retain, nonatomic) AWEIMAudioMessageViewModel *cellViewModel;
@property (nonatomic) BOOL isQuoteReplyStyle;
@property (nonatomic) BOOL chatListHasBackgroundImg;
@property (copy, nonatomic) id /* block */ bubbleTappedBlock;
@property (copy, nonatomic) id /* block */ panGestureStateChangedBlock;

- (void).cxx_destruct;

@end
