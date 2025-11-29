@interface IESIMTickleImpl.TickleUserSettingsEmoticonPanelView : UIView <AWEIMEmoticonKeyBoardDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ $__lazy_storage_$_emoticonView;
}

- (void)emoticonView:(id)a0 didSelectEmoticon:(id)a1 theme:(id)a2 themeView:(id)a3 indexPath:(id)a4;
- (void)emoticonViewDidSelectDelete:(id)a0;
- (void)emoticonViewDidSendText:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
