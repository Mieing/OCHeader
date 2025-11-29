@interface AWEFormatMessageListNaviBarProfileComponent : AWEIMComponentBase <AWEIMMessageListNaviBarViewProvider> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_button;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (long long)naviBarPriority;
- (id)naviBarView;
- (long long)naviBarPosition;
- (struct CGSize { double x0; double x1; })naviBarViewIntrinsicContentSize;
- (double)naviBarViewCustomSpacing;
- (void)buttonClickHandler;
- (void)componentDidMounted:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
