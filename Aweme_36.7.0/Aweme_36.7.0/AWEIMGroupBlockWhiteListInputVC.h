@class NSSet, UIViewController;
@protocol AWEIMInputViewControllerProtocol;

@interface AWEIMGroupBlockWhiteListInputVC : NSObject

@property (retain, nonatomic) NSSet *selectorWhiteListSet;
@property (weak, nonatomic) UIViewController<AWEIMInputViewControllerProtocol> *realInpuVC;

+ (double)defaultInputHeight;

- (void).cxx_destruct;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)doesNotRecognizeSelector:(SEL)a0;
- (void)doNothing;

@end
