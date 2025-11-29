@class NSString, UIView;

@interface AnnieXErrorViewElement : LynxUIView

@property (copy, nonatomic) NSString *containerId;
@property (retain, nonatomic) UIView *parentView;
@property (retain, nonatomic) UIView *errorView;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__371;

- (void)layoutDidFinished;
- (void)createErrorView;
- (void)containerId:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)createView;

@end
