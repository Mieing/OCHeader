@class UIFont, UIViewController;
@protocol AWEListenFeedInteractionContainerProtocol, AWEListenFeedInteractionViewControllerProtocol;

@interface AWEListenFeedInteractionContext : AWEPageContext

@property (nonatomic) BOOL isContentFilterShow;
@property (retain, nonatomic) UIFont *descriptionFont;
@property (weak, nonatomic) UIViewController<AWEListenFeedInteractionContainerProtocol, AWEListenFeedInteractionViewControllerProtocol> *container;

- (void).cxx_destruct;

@end
