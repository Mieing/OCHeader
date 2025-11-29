@class MMWebContainerHookView, UIView;

@interface MMWebNativeViewContainer : NSObject

@property (weak, nonatomic) UIView *scrollView;
@property (retain, nonatomic) UIView *nativeView;
@property (readonly, nonatomic) MMWebContainerHookView *nativeViewContainer;

- (id)init;
- (void)dealloc;
- (void)updateContainer;
- (void)destroy;
- (BOOL)checkNativeViewStatusAndReportIfLossed;
- (void).cxx_destruct;

@end
