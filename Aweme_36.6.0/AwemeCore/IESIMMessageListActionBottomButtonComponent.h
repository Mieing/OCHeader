@interface IESIMMessageListActionBottomButtonComponent : AWEIMComponentBase <IESIMMessageListActionBottomButtonComponentProtocol, AWEIMMessageBaseVCLayoutAction> {
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ backGroudColorView;
    void /* unknown type, empty encoding */ button;
    void /* unknown type, empty encoding */ oldEditState;
}

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)chatBackgroundDidChangeWithNoti:(id)a0;
- (BOOL)injectSelectWithMessage:(id)a0;
- (void)viewWillAnimateAlongsideTransitionToSizeWith:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
