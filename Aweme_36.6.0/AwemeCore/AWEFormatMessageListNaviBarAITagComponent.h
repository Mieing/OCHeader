@interface AWEFormatMessageListNaviBarAITagComponent : AWEIMComponentBase <AWEIMMessageListNaviBarTitleProvider> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_aiTag;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (long long)naviBarTitlePositionToBeDisplayed;
- (id)naviBarTitlePrioritiesToBeDisplayed;
- (id)naviBarTitlePrioritiesToWakeUp;
- (long long)naviBarTitlePriorityToBeSorted;
- (id)naviBarTitleCustomView;
- (double)naviBarTitleViewCustomSpacing;
- (void)componentDidMounted:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
