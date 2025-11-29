@class NSString;

@interface AWEIMMessageListInputSearchGifComponent : AWEIMComponentBase <AWEIMHalfScreenContainerVCDelegate, AWEIMComponentLazyCreate, AWEIMMessageListInputSearchGifInterface>

@property (nonatomic) long long oldInputType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lazyComponentWakeupInterface;

- (void)halfScreenContainerVCWillDismiss:(id)a0;
- (BOOL)halfScreenContainerVCShouldEndEdtingWhenDismissing:(id)a0;
- (BOOL)halfScreenContainerVCShouldEnableMinHeight:(id)a0;
- (BOOL)halfScreenContainerVCShouldUseMinHeightWhenDidAppear:(id)a0;
- (double)minContainerHeightRatioInHalfScreenContainerVC:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)showGifSearchViewControllerWithInputVC:(id)a0 actionType:(id)a1 extraDidSelectEmoticonBlock:(id /* block */)a2;

@end
