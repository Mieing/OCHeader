@class BDNativeWebContainerView, UIScrollView, UIView, BDNativeWebBaseComponent;

@interface BDNativeWebContainerObject : NSObject

@property (weak, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) BDNativeWebContainerView *containerView;
@property (weak, nonatomic) UIView *nativeView;
@property (retain, nonatomic) BDNativeWebBaseComponent *component;

- (void)enableObserverFrameChanged;
- (id)checkNativeInfo;
- (void)removeNativeView;
- (void)updateContainer;
- (void).cxx_destruct;
- (void)dealloc;

@end
