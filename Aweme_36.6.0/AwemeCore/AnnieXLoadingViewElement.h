@class NSString, UIView;

@interface AnnieXLoadingViewElement : LynxUIView

@property (copy, nonatomic) NSString *containerId;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIView *parentView;
@property (retain, nonatomic) UIView *loadingView;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__381;
+ (id)__lynx_prop_config__452;

- (void)layoutDidFinished;
- (void)createLoadingView;
- (void)setContainerId:(id)a0 requestReset:(BOOL)a1;
- (void)setText:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)createView;

@end
