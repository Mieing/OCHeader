@class NSString, UIViewController;

@interface TingCommentPlugin : NSObject <MMFlutterPlugin, TingCommentApi>

@property (weak, nonatomic) UIViewController *currentViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (void)onAttachedToViewController:(id)a0;
- (void)onDetachedToViewController;
- (void)showCommentInputViewRequest:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
