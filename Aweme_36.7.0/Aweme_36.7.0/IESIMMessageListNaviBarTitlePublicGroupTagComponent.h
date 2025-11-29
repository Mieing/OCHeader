@interface IESIMMessageListNaviBarTitlePublicGroupTagComponent : AWEIMComponentBase <AWEIMMessageListNaviBarTitleProvider> {
    void /* unknown type, empty encoding */ showTrackFlag;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tagLabel;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (long long)naviBarTitlePositionToBeDisplayed;
- (id)naviBarTitlePrioritiesToBeDisplayed;
- (id)naviBarTitlePrioritiesToWakeUp;
- (long long)naviBarTitlePriorityToBeSorted;
- (id)naviBarTitleCustomView;
- (struct CGSize { double x0; double x1; })naviBarTitleViewIntrinsicContentSize;
- (void)naviBarTitleWillAppearToPosition:(long long)a0;
- (void)componentDidMounted:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
