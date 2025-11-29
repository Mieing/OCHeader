@interface AWEFormatMessageListNaviBarSubTitleComponent : AWEIMComponentBase <AWEIMMessageListNaviBarTitleProvider, AWEConversationFormatEnterActions> {
    void /* unknown type, empty encoding */ naviBarTitleService;
    void /* unknown type, empty encoding */ jsbSubscriber;
    void /* unknown type, empty encoding */ ownerId;
    void /* unknown type, empty encoding */ jsbEventName;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_willDealloc;
- (void)afterInitialComponentAllResolved:(id)a0;
- (long long)naviBarTitlePositionToBeDisplayed;
- (id)naviBarTitlePrioritiesToBeDisplayed;
- (id)naviBarTitlePrioritiesToWakeUp;
- (long long)naviBarTitlePriorityToBeSorted;
- (id)naviBarTitleCustomView;
- (void)hostVC_viewDidLoad;
- (void)clickViewHandler;
- (void)didUpdateFormatRoom:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
