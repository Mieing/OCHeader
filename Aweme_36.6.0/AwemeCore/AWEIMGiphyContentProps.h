@class NSArray, AWEIMMessage, NSString;
@protocol AWEIMGiphyMessageProtocol;

@interface AWEIMGiphyContentProps : AWEIMUIViewPresenterProps

@property (retain, nonatomic) NSArray *imageUrls;
@property (copy, nonatomic) id /* block */ imageBlock;
@property (copy, nonatomic) id /* block */ didLoadImageBlock;
@property (retain, nonatomic) AWEIMMessage<AWEIMGiphyMessageProtocol> *message;
@property (copy, nonatomic) NSString *animateRunloopMode;
@property (nonatomic) BOOL shouldMirrorEmoji;
@property (copy, nonatomic) id /* block */ loopCompletionBlock;
@property (copy, nonatomic) id /* block */ coverDidTapBlock;
@property (copy, nonatomic) id /* block */ reloadDidTapBlock;
@property (nonatomic) unsigned long long customLoop;
@property (copy, nonatomic) NSString *imageAccessibilityLabel;

- (void).cxx_destruct;

@end
