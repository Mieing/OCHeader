@class ForwardMessageLogicController, UIViewController, NSString;

@interface WCFinderForwardHelper : NSObject <ForwardMessageLogicDelegate>

@property (weak, nonatomic) UIViewController *vc;
@property (nonatomic) BOOL isFastForward;
@property (retain, nonatomic) ForwardMessageLogicController *forwardLogicController;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)forwardWithCMessageWrap:(id)a0 fromVc:(id)a1;
+ (void)forwardWithCMessageWrap:(id)a0 toContact:(id)a1 completion:(id /* block */)a2 cancelBlock:(id /* block */)a3 fromVc:(id)a4;
+ (id)messageWrapFromImage:(id)a0;

- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)OnForwardMessageConfirmCanceled:(id)a0;
- (void).cxx_destruct;

@end
