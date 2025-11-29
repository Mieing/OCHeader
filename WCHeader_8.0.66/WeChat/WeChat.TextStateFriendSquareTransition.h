@class NSString, UIView;

@interface WeChat.TextStateFriendSquareTransition : NSObject <UIViewControllerTransitioningDelegate> {
    void /* unknown type, empty encoding */ username;
    void /* unknown type, empty encoding */ dismissUsername;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ friendSquare;
@property (nonatomic, weak) void /* unknown type, empty encoding */ cardList;
@property (nonatomic, copy) NSString *username;
@property (nonatomic, copy) NSString *dismissUsername;
@property (nonatomic, readonly) UIView *internalDismissHeadImage;

- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)initWithFriendSquare:(id)a0 cardList:(id)a1;
- (void)onWillBeginInternalDismiss;
- (void)onWillEndInternalDismiss;
- (void)onDidCancelInternalDismiss;
- (id)init;
- (void).cxx_destruct;

@end
