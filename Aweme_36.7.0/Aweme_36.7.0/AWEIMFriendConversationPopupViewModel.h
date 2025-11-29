@class UIViewController;

@interface AWEIMFriendConversationPopupViewModel : NSObject

@property (weak, nonatomic) UIViewController *viewControllerForPresentation;
@property (copy, nonatomic) id /* block */ enableFriendConversationBlock;
@property (copy, nonatomic) id /* block */ dismissPopupBlock;

- (void).cxx_destruct;

@end
