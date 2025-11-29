@class UIWindow;

@interface AWEIMFakeBlackScreenHelper : NSObject

@property (retain, nonatomic) UIWindow *topMaskWindow;

+ (BOOL)shouldUseTopMaskWindow;

- (void)fakeTurnOffScreenIfNeeded;
- (void)fakeTurnOnScreenIfNeeded;
- (void).cxx_destruct;

@end
