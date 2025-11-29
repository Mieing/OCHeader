@interface IESIMMessageListNaviBarPlatformSpecificationsComponent : AWEIMComponentBase <AWEIMMessageListNaviBarViewProvider> {
    void /* unknown type, empty encoding */ showTrackFlag;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tagImageView;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (long long)naviBarPriority;
- (id)naviBarView;
- (long long)naviBarPosition;
- (struct CGSize { double x0; double x1; })naviBarViewIntrinsicContentSize;
- (void)naviBarViewWillAppearToPosition:(long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)themeChanged;
- (void)tagClicked;
- (void).cxx_destruct;
- (id)init;

@end
