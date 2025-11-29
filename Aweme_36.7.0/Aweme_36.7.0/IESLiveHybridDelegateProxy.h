@class NSString, NSObject;
@protocol IESHYControllerDelegate;

@interface IESLiveHybridDelegateProxy : NSProxy <IESHYControllerDelegate>

@property (readonly, weak, nonatomic) NSObject<IESHYControllerDelegate> *originalDelegate;
@property (copy, nonatomic) id /* block */ didCreatedHYViewBlock;
@property (copy, nonatomic) id /* block */ didStartLoadBlock;
@property (copy, nonatomic) id /* block */ didFinishLoadBlock;
@property (copy, nonatomic) id /* block */ didFinishLoadWithErrorBlock;
@property (copy, nonatomic) id /* block */ willDismissBlock;
@property (copy, nonatomic) id /* block */ didDismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)iesHYController:(id)a0 didFinishLoadWithError:(id)a1;
- (void)iesHYController:(id)a0 didCreatedHYView:(id)a1;
- (void)iesHYControllerDidStartLoad:(id)a0;
- (void)iesHYControllerDidFinishLoad:(id)a0;
- (void)iesHYControllerWillDismiss:(id)a0;
- (void)iesHYControllerDidDismiss:(id)a0;
- (void)updateOriginalDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
