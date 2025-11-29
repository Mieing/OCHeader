@class NSString;
@protocol AWEIMCardMessageViewModelInterface;

@interface AWEIMFeedQuoteReplyComponent : AWEIMFeedContentComponent <AWEIMFoldMessageAssistanceButtonClickAction>

@property (retain, nonatomic) id<AWEIMCardMessageViewModelInterface> quotedViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)didClickAssistanceButton:(long long)a0;
- (id)displayViewModel;
- (void)didTapFeedCover:(BOOL)a0 extraParams:(id)a1;
- (void).cxx_destruct;
- (id)displayMessage;

@end
