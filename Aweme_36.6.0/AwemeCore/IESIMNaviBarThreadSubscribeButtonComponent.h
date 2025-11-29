@interface IESIMNaviBarThreadSubscribeButtonComponent : AWEIMComponentBase <AWEIMMessageListNaviBarViewProvider> {
    void /* unknown type, empty encoding */ buttonWith;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bubbleView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_button;
    void /* unknown type, empty encoding */ $__lazy_storage_$_popover;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)didClickButton;
- (void)afterInitialComponentAllResolved:(id)a0;
- (long long)naviBarPriority;
- (id)naviBarView;
- (long long)naviBarPosition;
- (struct CGSize { double x0; double x1; })naviBarViewIntrinsicContentSize;
- (void)componentDidMounted:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
