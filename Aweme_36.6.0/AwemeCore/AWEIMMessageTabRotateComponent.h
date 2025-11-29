@class NSString;
@protocol AWEIMMessageTabPopupViewInterface;

@interface AWEIMMessageTabRotateComponent : AWEIMComponentBase <AWEIMMessageTabRotateInterface>

@property (weak, nonatomic) id<AWEIMMessageTabPopupViewInterface> popupService;
@property (nonatomic) BOOL isCycleCallFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;

@end
