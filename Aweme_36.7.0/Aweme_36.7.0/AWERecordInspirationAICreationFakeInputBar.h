@interface AWERecordInspirationAICreationFakeInputBar : UIView {
    void /* unknown type, empty encoding */ placeholder;
    void /* unknown type, empty encoding */ word;
    void /* unknown type, empty encoding */ didTapFakeInputBar;
    void /* unknown type, empty encoding */ didTapAddButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundEffectView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_aiIconView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_label;
    void /* unknown type, empty encoding */ $__lazy_storage_$_addButton;
}

- (void)awe_themeDidChange:(long long)a0;
- (id)initWithWord:(id)a0 didTapFakeInputBar:(id /* block */)a1 didTapAddButton:(id /* block */)a2;
- (void)addButtonDidTap;
- (void).cxx_destruct;
- (void)setText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)getText;

@end
