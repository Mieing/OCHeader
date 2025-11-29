@interface AWEIMMessageTailButtonProps : AWEIMUIViewPresenterProps

@property (nonatomic) BOOL showReplyButton;
@property (copy, nonatomic) id /* block */ tapAction;
@property (nonatomic) long long style;
@property (nonatomic) BOOL enableAnimation;
@property (nonatomic) BOOL iconHidden;

- (void).cxx_destruct;

@end
