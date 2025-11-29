@interface AWEIMMessageEmoticonReplyPendantPresenterProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ refreshBlock;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (copy, nonatomic) id /* block */ didAddMoreEmoji;

- (void).cxx_destruct;

@end
