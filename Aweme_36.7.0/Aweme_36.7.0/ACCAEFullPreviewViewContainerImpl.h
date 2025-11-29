@class NSString, UIView;

@interface ACCAEFullPreviewViewContainerImpl : NSObject <ACCAEFullPreviewViewContainer>

@property (weak, nonatomic) UIView *rootView;
@property (readonly, nonatomic) UIView *mediaView;
@property (readonly, nonatomic) UIView *bottomControlView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewContainerDidLoad;
- (id)initWithRootView:(id)a0;
- (void).cxx_destruct;

@end
