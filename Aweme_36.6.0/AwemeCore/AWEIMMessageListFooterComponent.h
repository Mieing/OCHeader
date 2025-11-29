@class NSString, UIView;
@protocol AWEIMMessageListLayoutInterface;

@interface AWEIMMessageListFooterComponent : AWEIMComponentBase <AWEIMMessageListFooterInterface>

@property (retain, nonatomic) UIView *footerContainer;
@property (weak, nonatomic) id<AWEIMMessageListLayoutInterface> layoutService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)addFooterView:(id)a0 withConfig:(id)a1;
- (void)dismissFooterView:(id)a0 withConfig:(id)a1;
- (void)addCoverView:(id)a0 withConfig:(id)a1;
- (void)dismisssCoverView:(id)a0 withConfig:(id)a1;
- (void).cxx_destruct;

@end
