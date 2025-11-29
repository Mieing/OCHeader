@class AWEIMGiphyMessageViewModel;

@interface AWEIMGiphyQuoteReplyComponent : AWEIMGiphyContentComponent

@property (retain, nonatomic) AWEIMGiphyMessageViewModel *quotedViewModel;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (id)displayViewModel;
- (void).cxx_destruct;
- (id)displayMessage;

@end
