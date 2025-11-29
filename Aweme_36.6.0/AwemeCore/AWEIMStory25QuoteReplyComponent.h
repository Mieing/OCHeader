@protocol AWEIMCardMessageViewModelInterface;

@interface AWEIMStory25QuoteReplyComponent : AWEIMStory25ContentComponent

@property (retain, nonatomic) id<AWEIMCardMessageViewModelInterface> quotedViewModel;

- (void)componentDidMounted:(id)a0;
- (id)displayViewModel;
- (void)didTapFeedCover:(BOOL)a0 extraParams:(id)a1 cardView:(id)a2;
- (void).cxx_destruct;
- (id)displayMessage;

@end
