@interface IESIMMenuGroupCollectComponent : AWEIMComponentBase <AWEIMMessageListMenuProtocol> {
    void /* unknown type, empty encoding */ _groupCollectService;
    void /* unknown type, empty encoding */ currentMessageAndState;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (BOOL)canShowItemWithMessage:(id)a0 context:(id)a1;
- (id)menuItemTitle:(id)a0 context:(id)a1;
- (id)menuItemImageName:(id)a0 context:(id)a1;
- (id)menuTrackerName:(id)a0 context:(id)a1;
- (unsigned long long)menuItemType;
- (void)didClickItemWithMessage:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
