@interface AWEFormatMessageListNaviBarAvatarComponent : AWEIMComponentBase <AWEConversationFormatEnterActions, AWEIMMessageListNaviBarTitleProvider> {
    void /* unknown type, empty encoding */ roomModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_avatarView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tagView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tagBackgroudView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerView;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (long long)naviBarTitlePositionToBeDisplayed;
- (id)naviBarTitlePrioritiesToBeDisplayed;
- (id)naviBarTitlePrioritiesToWakeUp;
- (long long)naviBarTitlePriorityToBeSorted;
- (id)naviBarTitleCustomView;
- (struct CGSize { double x0; double x1; })naviBarTitleViewIntrinsicContentSize;
- (void)hostVC_viewDidLoad;
- (void)didUpdateFormatRoom:(id)a0;
- (void)clickAvatarHandler;
- (void)componentDidMounted:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
